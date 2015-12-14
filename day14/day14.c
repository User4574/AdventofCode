#include <stdio.h>

#define MAXTIME 2503

int calcdist(int speed, int fly, int rest, int time) {
  int second = 0, dist = 0, run;
  while(1) {
    run = 0;
    while(second < time && run < fly) {
      dist += speed;
      second++;
      run++;
    }

    run = 0;
    while(second < time && run < rest) {
      second++;
      run++;
    }

    if(second == time) break;
  }
  return dist;
}

int maxpoints(int* speed, int* fly, int* rest, int num, int time) {
  int i, second = 1, dist[20], maxdist, points[20], maxpoints = 0;

  for(i = 0; i < num; i++) points[i] = 0;

  while(second < time) {
    maxdist = 0;

    for(i = 0; i < num; i++) {
      dist[i] = calcdist(*(speed+i), *(fly+i), *(rest+i), second);
      if(dist[i] > maxdist) maxdist = dist[i];
    }

    for(i = 0; i < num; i++)
      if(dist[i] == maxdist) points[i]++;

    second++;
  }

  for(i = 0; i < num; i++)
    if(points[i] > maxpoints)
      maxpoints = points[i];

  return maxpoints;
}

int main() {
  char name[20];
  int speed[20], fly[20], rest[20], idx = 0, dist, maxdist = 0;

  while(scanf("%s can fly %d km/s for %d seconds, but then must rest for %d seconds.", name, speed+idx, fly+idx, rest+idx) != EOF) {
    dist = calcdist(*(speed+idx), *(fly+idx), *(rest+idx), MAXTIME);
    if(dist > maxdist) maxdist = dist;
    idx++;
  }

  printf("Max distance travelled: %d km\n", maxdist);
  printf("Max points earned: %d\n", maxpoints(speed, fly, rest, idx, MAXTIME));

  return 0;
}
