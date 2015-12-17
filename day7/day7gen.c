#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define ungetchar(ch) ungetc(ch, stdin)

typedef enum { NONE, NUMBER, WIRE } SIGTYPE;

typedef enum { ASSIGN, AND, OR, NOT, LSHIFT, RSHIFT } OPTYPE;

typedef struct {
  SIGTYPE type;
  union {
    char wire[20];
    uint16_t number;
  } value;
} SIGNAL;

SIGNAL wire() {
  SIGNAL s;
  int i = 0, ch;

  s.type = WIRE;
  while((ch = getchar()) != ' ' && ch != '\n')
    s.value.wire[i++] = ch;
  s.value.wire[i] = '\0';

  return s;
}

SIGNAL number() {
  SIGNAL s;
  int ch, num = 0;

  while((ch = getchar()) != ' ')
    num = (num * 10) + (ch - 48);

  s.type = NUMBER;
  s.value.number = num;

  return s;
}

void printfunction(OPTYPE op, SIGNAL in1, SIGNAL in2, SIGNAL out) {
  char* b1 = (in1.type == WIRE ? "()\0" : "\0");
  char* b2 = (in2.type == WIRE ? "()\0" : "\0");
  char s1[25], s2[25];

  switch(in1.type) {
    case NUMBER:
      sprintf(s1, "%d", in1.value.number);
      break;
    case WIRE:
      sprintf(s1, "wire_%s", in1.value.wire);
  }

  switch(in2.type) {
    case NUMBER:
      sprintf(s2, "%d", in2.value.number);
      break;
    case WIRE:
      sprintf(s2, "wire_%s", in2.value.wire);
  }

  dprintf(2, "uint16_t wire_%s();\n", out.value.wire);

  printf("uint16_t wire_%s() {\n", out.value.wire);
  printf("\tuint16_t out;\n");
  printf("\tif(iscached(\"%s\"))\n", out.value.wire);
  printf("\t\treturn getcache(\"%s\");\n", out.value.wire);
  printf("\telse {\n");
  switch(op) {
    case ASSIGN:
      printf("\t\tout = %s%s;\n", s1, b1);
      break;
    case AND:
      printf("\t\tout = (%s%s & %s%s);\n", s1, b1, s2, b2);
      break;
    case OR:
      printf("\t\tout = (%s%s | %s%s);\n", s1, b1, s2, b1);
      break;
    case NOT:
      printf("\t\tout = ~%s%s;\n", s2, b2);
      break;
    case LSHIFT:
      printf("\t\tout = (%s%s << %s%s);\n", s1, b1, s2, b2);
      break;
    case RSHIFT:
      printf("\t\tout = (%s%s >> %s%s);\n", s1, b1, s2, b2);
      break;
  }
  printf("\t\tputcache(\"%s\", out);\n", out.value.wire);
  printf("\t\treturn out;\n");
  printf("\t}\n");
  printf("}\n");
}

void preamble() {
  dprintf(3, "#include <stdlib.h>\n#include <stdio.h>\n#include <string.h>\n#include <stdint.h>\n\n");
  dprintf(3, "uint16_t* cache;\nchar* incache;\n\n");
  dprintf(3, "int wtoi(char* wire) {\n\tint idx = 0, i;\n\tfor(i = 0; wire[i] != '\\0'; i++) {\n\t\tidx *= 26;\n\t\tidx += wire[i];\n\t}\n\treturn idx;\n}\n");
  dprintf(3, "char iscached(char* wire) {\n\treturn incache[wtoi(wire)];\n}\n");
  dprintf(3, "uint16_t getcache(char* wire) {\n\treturn cache[wtoi(wire)];\n}\n");
  dprintf(3, "void putcache(char* wire, uint16_t value) {\n\tcache[wtoi(wire)] = value;\n}\n\n");
}

void postamble() {
  char* len = "26*26";
  printf("\nint main() {\n");
  printf("\tcache = (uint16_t*) malloc(%s*sizeof(uint16_t));\n", len);
  printf("\tincache = (char*) malloc(%s*sizeof(char));\n", len);
  printf("\tmemset(incache, 0, %s);\n\n", len);
  printf("\tprintf(\"Value of wire a: %%d\\n\", wire_a());\n\n");
  printf("\tfree(cache);\n");
  printf("\tfree(incache);\n");
  printf("}\n");
}

int readline() {
  SIGNAL in1, in2, out;
  OPTYPE op;
  int ch;

  ch = getchar();
  if(ch == EOF) {
    return 0;
  } else if(ch <= 'z' && ch >= 'a') {
    ungetchar(ch);
    in1 = wire();
  } else if(ch <= '9' && ch >= '0') {
    ungetchar(ch);
    in1 = number();
  } else if(ch == 'N') {
    ungetchar(ch);
    in1.type = NONE;
  }

  ch = getchar();
  switch(ch) {
    case '-': op = ASSIGN; break;
    case 'A': op = AND;    break;
    case 'O': op = OR;     break;
    case 'N': op = NOT;    break;
    case 'L': op = LSHIFT; break;
    case 'R': op = RSHIFT;
  }
  while((ch = getchar()) != ' ');

  if(op == ASSIGN)
    out = wire();
  else {
    ch = getchar();
    if(ch <= 'z' && ch >= 'a') {
      ungetchar(ch);
      in2 = wire();
    } else if(ch <= '9' && ch >= '0') {
      ungetchar(ch);
      in2 = number();
    }

    while((ch = getchar()) != ' ');

    out = wire();
  }

  printfunction(op, in1, in2, out);
  return 1;
}

int main() {
  preamble();
  while(readline());
  postamble();
  return 0;
}
