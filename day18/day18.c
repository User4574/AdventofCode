#include <stdio.h>
#include <stdlib.h>

#define ROWS 100
#define COLS 100

void new(int*** a) {
  int i;
  *a = (int**) malloc(ROWS * sizeof(int*));
  for(i=0; i<ROWS; i++)
    (*a)[i] = (int*) malloc(COLS * sizeof(int));
}

void delete(int** a) {
  int i;
  for(i=0; i<ROWS; i++)
    free(a[i]);
  free(a);
}

void copy(int** src, int** dst) {
  int i, j;
  for(i=0; i<ROWS; i++)
    for(j=0; j<COLS; j++)
      dst[i][j] = src[i][j];
}

void readinto(int** a) {
  int i, j, ch;
  for(i=0; i<ROWS; i++) {
    for(j=0; j<COLS; j++) {
      ch = getchar();
      switch(ch) {
        case '.': a[i][j] = 0; break;
        case '#': a[i][j] = 1;
      }
    }
    getchar(); // '\n'
  }
}

int ncount(int** a, int r, int c) {
  int n = 0, i, j;

  for(i=-1; i<2; i++)
    for(j=-1; j<2; j++)
      if((r+i)>=0 && (r+i)<ROWS && (c+j)>=0 && (c+j)<COLS && !(i == 0 && j == 0))
        n += a[r+i][c+j];

  return n;
}

void step(int** old, int** new) {
  int i, j, c;

  for(i=0; i<ROWS; i++)
    for(j=0; j<COLS; j++) {
      c = ncount(old, i, j);
      if(old[i][j]) {
        if(c == 2 || c == 3) new[i][j] = 1;
        else                 new[i][j] = 0;
      } else {
        if(c == 3) new[i][j] = 1;
        else       new[i][j] = 0;
      }
    }
}

void corners(int** a) {
  a[0][0] = a[ROWS-1][0] = a[0][COLS-1] = a[ROWS-1][COLS-1] = 1;
}

int numlights(int** a) {
  int n = 0, i, j;

  for(i=0; i<ROWS; i++)
    for(j=0; j<COLS; j++)
      n += a[i][j];

  return n;
}

int main() {
  int i, **input, **this, **that;

  new(&input);
  new(&this);
  new(&that);

  readinto(input);

  copy(input, this);
  for(i=0; i<50; i++) {
    step(this, that);
    step(that, this);
  }
  printf("Number of lights: %d\n", numlights(this));

  copy(input, this);
  corners(this);
  for(i=0; i<50; i++) {
    step(this, that);
    corners(that);
    step(that, this);
    corners(this);
  }
  printf("Number of lights: %d\n", numlights(this));

  delete(input);
  delete(this);
  delete(that);
  return 0;
}
