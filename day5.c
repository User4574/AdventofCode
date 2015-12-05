#include <stdio.h>

int oldmodel(char* line) {
  int i;
  char flags = 4, vowels = 0;

  for(i = 0; i < 16; i++) {
    if( line[i] == 'a' ||
        line[i] == 'e' ||
        line[i] == 'i' ||
        line[i] == 'o' ||
        line[i] == 'u'  ) vowels++;
    if(i < 15) {
      if(line[i] == line[i+1])               flags |= 2;
      if(line[i] == 'a' && line[i+1] == 'b') flags &= 3;
      if(line[i] == 'c' && line[i+1] == 'd') flags &= 3;
      if(line[i] == 'p' && line[i+1] == 'q') flags &= 3;
      if(line[i] == 'x' && line[i+1] == 'y') flags &= 3;
    }
  }
  if (vowels > 2) flags |= 1;

  return (flags == 7);
}

int newmodel(char* line) {
  int i, j;
  char flags = 0, vowels = 0;

  for(i = 0; i < 14; i++) {
    for(j = i+2; j < 16; j++)
      if(line[i] == line[j] && line[i+1] == line[j+1]) flags |= 1;
    if(line[i] == line[i+2]) flags |= 2;
  }

  return (flags == 3);
}

int main() {
  char line[20];
  int oldnice = 0, newnice = 0;

  while (scanf("%s", line) != EOF) {
    if(oldmodel(line)) oldnice++;
    if(newmodel(line)) newnice++;
  }

  printf("Old model: %d\n", oldnice);
  printf("New model: %d\n", newnice);

  return 0;
}
