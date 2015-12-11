#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

char* incr(char password[8]) {
  int i, rollover = 1;

  for(i = 7; (i >= 0) && rollover; i--) {
    if(password[i] == 'z') {
      password[i] = 'a';
    } else {
      password[i] += 1;
      rollover = 0;
    }
  }

  return password;
}

char check(char* password) {
  char i, flags = 2, firstpair = 0;

  for(i = 0; i < 5; i++)
    if(password[i+1] == password[i] + 1 && password[i+2] == password[i] + 2)
      flags |= 1;

  for(i = 0; i < 8; i++)
    if(password[i] == 'i' || password[i] == 'o' || password[i] == 'l')
      flags &= (~2);

  for(i = 0; i < 7; i++) {
    if(password[i] == password[i+1]) {
      if(firstpair) {
        if(password[i] != firstpair)
          flags |= 4;
      }
      else
        firstpair = password[i];
      i++;
    }
  }

  return (flags == 7);
}

char* next(char* password) {
  char good = 0;

  while(!good) {
    password = incr(password);
    good = check(password);
  }

  return password;
}

int main() {
  char *password;
  password = malloc(10*sizeof(char));
  scanf("%s", password);

  password = next(password);
  printf("First new password: %s\n", password);

  password = next(password);
  printf("Second new password: %s\n", password);

  free(password);

  return 0;
}
