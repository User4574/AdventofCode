#include <stdlib.h>
#include <stdio.h>

int** make2dWithOffset(int rows, int cols, int roff, int coff) {
  int i;

  int** arr = (int**) malloc(rows * sizeof(int*));
  for(i = 0; i < rows ; i++)
    arr[i] = (int*) malloc(cols * sizeof(int)) + coff;

  return (arr + roff);
}

void free2dWithOffset(int** arr, int rows, int roff) {
  int i;
  for(i = -roff; i < rows - roff ; i++)
    free(arr[i]);
  free(arr - roff);
}

int main() {
  int** somap = make2dWithOffset(400, 400, 200, 200);
  int** rsmap = make2dWithOffset(400, 400, 200, 200);
  int ch, i, j, sosum = 0, rssum = 0, odd = 1;
  int soeasting = 0, sonorthing = 0,
      seasting = 0, snorthing = 0,
      rseasting = 0, rsnorthing = 0;

  for(i = -200; i < 200; i++)
    for(j = -200; j < 200 ; j++) {
      somap[i][j] = 0;
      rsmap[i][j] = 0;
    }

  somap[0][0] = 1;
  rsmap[0][0] = 2;

  while((ch = getchar()) != EOF) {
    switch(ch) {
      case '<':
        soeasting--;
        if (odd)
          seasting--;
        else
          rseasting--;
        break;
      case '>':
        soeasting++;
        if (odd)
          seasting++;
        else
          rseasting++;
        break;
      case 'v':
        sonorthing--;
        if (odd)
          snorthing--;
        else
          rsnorthing--;
        break;
      case '^':
        sonorthing++;
        if (odd)
          snorthing++;
        else
          rsnorthing++;
    }
    odd = !odd;
    somap[soeasting][sonorthing]++;
    rsmap[seasting][snorthing]++;
    rsmap[rseasting][rsnorthing]++;
  }

  for(i = -200; i < 200; i++)
    for(j = -200; j < 200 ; j++) {
      if(somap[i][j] > 0)
        sosum++;
      if(rsmap[i][j] > 0)
        rssum++;
    }

  printf("Santa only: %d\nRobosanta:  %d\n", sosum, rssum);
  return 0;
}
