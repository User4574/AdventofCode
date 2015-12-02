#include <stdio.h>

int min2(int a, int b) {
  if (a < b) return a;
  return b;
}
int min3(int a, int b, int c) {
  return min2(min2(a, b), c);
}

int readsides(int* length, int* width, int* height) {
  return scanf("%dx%dx%d", length, width, height);
}

void calcsides(int length, int width, int height, int* side1, int* side2, int* side3) {
  (*side1) = length * width;
  (*side2) = width * height;
  (*side3) = height * length;
}

int main() {
  int length, width, height;
  int side1, side2, side3;
  int area, totalarea = 0;

  while (readsides(&length, &width, &height) > 0) {
    calcsides(length, width, height, &side1, &side2, &side3);
    area = 2*side1 + 2*side2 + 2*side3 + min3(side1, side2, side3);
    totalarea += area;
  }

  printf("%d\n", totalarea);
  return 0;
}
