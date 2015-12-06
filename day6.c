#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, j,
      rs, cs, re, ce,
      numlights = 0, brightness = 0;
  int** lights; int** lights2;
  char istr[10];

  lights = (int**) malloc(1000*sizeof(int*));
  lights2 = (int**) malloc(1000*sizeof(int*));
  for(i = 0; i < 1000; i++) {
    lights[i] = (int*) malloc(1000*sizeof(int));
    memset(lights[i], 0, 1000);
    lights2[i] = (int*) malloc(1000*sizeof(int));
    memset(lights2[i], 0, 1000);
  }

  while(scanf("%s", istr) != EOF) {
    if(strncmp(istr, "turn", 4) == 0)
      scanf("%s %d,%d through %d,%d", istr, &rs, &cs, &re, &ce);
    else
      scanf("%d,%d through %d,%d", &rs, &cs, &re, &ce);

    if(strncmp(istr, "on", 2) == 0) {
      for(i = rs; i <= re; i++)
        for(j = cs; j <= ce; j++) {
          lights[i][j] = 1;
          lights2[i][j] += 1;
        }
    } else if(strncmp(istr, "off", 3) == 0) {
      for(i = rs; i <= re; i++)
        for(j = cs; j <= ce; j++) {
          lights[i][j] = 0;
          if(lights2[i][j]) lights2[i][j] -= 1;
        }
    } else if(strncmp(istr, "toggle", 6) == 0) {
      for(i = rs; i <= re; i++)
        for(j = cs; j <= ce; j++) {
          lights[i][j] = !lights[i][j];
          lights2[i][j] += 2;
        }
    }
  }

  for(i = 0; i < 1000; i++)
    for(j = 0; j < 1000; j++) {
      if(lights[i][j]) numlights++;
      brightness += lights2[i][j];
    }

  printf("Number of lights that are on: %d\n", numlights);
  printf("Total brightness: %d\n", brightness);

  for(i = 0; i < 1000; i++) {
    free(lights[i]);
    free(lights2[i]);
  }
  free(lights);
  free(lights2);

  return 0;
}
