#include<stdio.h>
#include<math.h>

typedef int BOOLEAN;

BOOLEAN IsPrime(int n) {
  int i;
  BOOLEAN flag = (n>1);
  for (i=2; flag && i <= sqrt(n); ++i) {
    flag = (n%i);
  }
  return flag;
}

int main() {
  int i;
  for (i=1; i<1000; ++i) {
    if (IsPrime(i)) {
      printf("%d \n", i);
    }
  }
  return 0;
}
