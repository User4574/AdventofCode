#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

unsigned char* secret = "iwrupvqb";
unsigned char* target = "000000";
unsigned char result[MD5_DIGEST_LENGTH];

void hash(int i) {
  char num[12];
  sprintf(num, "%d", i);
  char str[22] = "";
  strcat(str, secret);
  strcat(str, num);

  MD5(str, strlen(str), result);
}

int tohex() {
  int i, dg = 0;
  for(i = 0; i < 4; i++) {
    dg <<= 8;
    dg += result[i];
  }
  return dg;
}

int check(int len) {
  unsigned char str[8];
  int dg = tohex();
  sprintf(str, "%08x", dg);
  return strncmp(str, target, len) == 0;
}

int main() {
  int i = 1, got5 = 0, got6 = 0;

  while(!(got5 && got6)) {
    hash(i);
    if(!got5 && check(5)) {
      got5 = 1;
      printf("Lowest number for 5-zeroes hash: %d\n", i);
    }
    if(!got6 && check(6)) {
      got6 = 1;
      printf("Lowest number for 6-zeroes hash: %d\n", i);
    }
    i++;
  }

  return 0;
}
