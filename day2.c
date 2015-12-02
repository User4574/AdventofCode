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

void calcperi(int edge1, int edge2, int* peri) {
  (*peri) = 2 * edge1 + 2 * edge2;
}

void calcarea(int side1, int side2, int side3, int* area) {
  (*area) = 2*side1 + 2*side2 + 2*side3 + min3(side1, side2, side3);
}

void calcribbon(int length, int width, int height, int* ribbon) {
  int bow, wrap;
  int side1, side2, side3;
  calcperi(length, width, &side1);
  calcperi(width, height, &side2);
  calcperi(height, length, &side3);
  wrap = min3(side1, side2, side3);
  bow = length * width * height;
  (*ribbon) = wrap + bow;
}

int main() {
  int length, width, height;
  int side1, side2, side3;
  int area, totalarea = 0;
  int ribbon, totalribbon = 0;

  while (readsides(&length, &width, &height) > 0) {
    calcsides(length, width, height, &side1, &side2, &side3);
    calcarea(side1, side2, side3, &area);
    calcribbon(length, width, height, &ribbon);
    totalarea += area;
    totalribbon += ribbon;
  }

  printf("Total area: %d\nTotal ribbon: %d\n", totalarea, totalribbon);
  return 0;
}
