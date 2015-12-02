#include <stdio.h>

int main() {
  int ch, floor = 0, pos = 0, first_basement = 1;
  while ((ch = getchar()) != EOF) {
    pos += 1;
    switch(ch) {
      case '(':
        floor += 1;
        break;
      case ')':
        floor -= 1;
    }
    if (floor == -1 && first_basement) {
      printf("In the basement at position: %d\n", pos);
      first_basement = 0;
    }
  }
  printf("Final floor: %d\n", floor);
  return 0;
}
