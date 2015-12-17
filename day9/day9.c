#include <stdio.h>
#include <string.h>

#define MAXCITIES 8

char* cities[MAXCITIES];
int matrix[MAXCITIES][MAXCITIES];
int seencity = 0;

int cityindex(char* city) {
  int i;
  for(i = 0; i < seencity ; i++)
    if(strcmp(city, cities[i]) == 0)
      return i;
  return -1;
}

int addcity(char* city) {
  cities[seencity++] = city;
  return seencity;
}

void input(char* from, char* to, int dist) {
  int f, t;
  f = cityindex(from);
  t = cityindex(to);
  if(f == -1) f = addcity(from);
  if(t == -1) t = addcity(to);
  matrix[f][t] = dist;
  matrix[t][f] = dist;
}

int main() {
  char from[20], to[20];
  int dist, mindist, tourid;

  while(scanf("%s to %s = %d", from, to, &dist) != EOF)
    input(from, to, dist);

  dist = 0; mindist = 0x7FFFFFFF;
  

  return 0;
}
