#include "tigress.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

void init_tigress () {}

void fac(int n) {
  int s=1;
  int i;
  for (i=2; i<=n; i++) {
    s *= i;
  }
  printf("fac(%i)=%i\n",n,s);
}

void fib(int n) {
  int a=0;
  int b=1;
  int s=1;

  int i;
  for (i=1; i<n; i++) {
    s=a+b;
    a=b;
    b=s;
  }
  printf("fib(%i)=%i\n",n,s);
}

int main (int argc, char** argv) {
  init_tigress();
  fac(10);
  fib(10);
  return 0;
}
