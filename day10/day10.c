#include <stdio.h>
#include <stdlib.h>

int encode(char* dest, char* src) {
  int d = 0, s = 0, num;
  char c;

  while(src[s] != '\0') {
    c = src[s];
    num = 0;

    while(src[s] == c) {
      num++;
      s++;
    }

    d += sprintf(dest + d, "%d", num);
    dest[d++] = c;
  }
  dest[d] = '\0';

  return d;
}

int main() {
  char *this, *next;
  int i, len;

  this = (char*) malloc(11 * sizeof(char));
  next = (char*) malloc(21 * sizeof(char));

  scanf("%s", this);

  for(i = 0; i < 20; i++) {
    len = encode(next, this);
    this = realloc(this, (2*len)+1);
    len = encode(this, next);
    next = realloc(next, (2*len)+1);
  }

  printf("First final length: %d\n", len);

  for(i = 0; i < 5; i++) {
    len = encode(next, this);
    this = realloc(this, (2*len)+1);
    len = encode(this, next);
    next = realloc(next, (2*len)+1);
  }

  printf("Second final length: %d\n", len);

  free(this);
  free(next);
  return 0;
}
