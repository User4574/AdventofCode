#include <stdio.h>

int readline(char* line) {
  int ch, idx = 0;

  while((ch = getchar()) != '\n' && ch != EOF)
    line[idx++] = (char) ch;

  line[idx] = '\0';
  return idx;
}

int calcdiff1(char* line) {
  int i, code = 0, mem = 0;

  for(i = 0; line[i] != '\0'; i++) {
    switch(line[i]) {
      case '"':
        code += 1;
        break;
      case '\\':
        i += 1;
        switch(line[i]) {
          case '\\':
          case '"':
            code += 2;
            mem += 1;
            break;
          case 'x':
            i += 2;
            code += 4;
            mem += 1;
        }
        break;
      default:
        code += 1;
        mem += 1;
    }
  }

  return code - mem;
}

int calcdiff2(char* line) {
  int i, nl = 2;

  for(i = 0; line[i] != '\0'; i++) {
    switch(line[i]) {
      case '"':
      case '\\':
        nl += 2;
        break;
      default:
        nl += 1;
    }
  }

  return nl - i;
}

int main() {
  char line[127];
  int diff1 = 0, diff2 = 0;

  while(readline(line)) {
    diff1 += calcdiff1(line);
    diff2 += calcdiff2(line);
  }

  printf("Part 1: %d\n", diff1);
  printf("Part 2: %d\n", diff2);
  return 0;
}
