#include <stdio.h>
#include <stdlib.h>

#define ungetchar(ch) ungetc(ch, stdin)

int getnumber(char* input, int* i) {
  int ch, num = 0, neg = 0;

  if(input[(*i)++] == '-') {
    ch = input[(*i)++];

    if(ch < '0' || ch > '9')
      return 0;
    else
      neg = 1;
  }
  (*i)--;

  while((ch = input[(*i)++]) >= '0' && ch <= '9')
    num = (num * 10) + (ch - 48);
  (*i)--;

  if(neg)
    return -num;
  else
    return num;
}

int sumnumbers(char* input) {
  int tot = 0, ch, i = 0;

  while((ch = input[i++]) != '\0') {
    if((ch >= '0' && ch <= '9') || ch == '-') {
      i--;
      tot += getnumber(input, &i);
    }
  }

  return tot;
}

int sumnonred(char* input) {
  return 0;
}

char* readtheinput() {
  char *theinput, ch;
  int i = 0, max = 1024;
    
  theinput = (char*) malloc(max * sizeof(char));

  while((ch = getchar()) != EOF) {
    theinput[i++] = ch;
    if(i == max) {
      max += 1024;
      theinput = (char*) realloc((void*) theinput, max * sizeof(char));
    }
  }

  theinput[i] = '\0';

  return theinput;
}

int main() {
  char* theinput;

  theinput = readtheinput();

  printf("Sum of all numbers: %d\n", sumnumbers(theinput));
  printf("Sum of all non-red numbers: %d\n", sumnonred(theinput));

  free(theinput);
  return 0;
}
