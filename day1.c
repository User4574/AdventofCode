#include <stdio.h>

int main() {
  int ch, floor = 0;
  while ((ch = getchar()) != EOF) {
    switch(ch) {
      case '(':
        floor += 1;
        break;
      case ')':
        floor -= 1;
    }
  }
  printf("%d\n", floor);
  return 0;
}
