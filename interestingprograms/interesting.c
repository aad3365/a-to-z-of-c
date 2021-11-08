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

void InRoman(int n) {
  int i, v[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000, 9999};
  char *r[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
  while(n) {
    for (i=0; v[i]<=n; ++i);
    --i;
    n -= v[i];
    printf("%s", r[i]);
  }
}

// read!! https://www.quora.com/How-does-Tomohiko-Sakamotos-Algorithm-work
int DayOfWeek( int y, int m, int d ) {
  static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
  y -= m < 3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
} 

int main() {
  int i;
  for (i=1; i<1000; ++i) {
    if (IsPrime(i)) {
      printf("%d \n", i);
    }
  }
  int n;
  printf("arabic num: ");
  scanf("%d", &n);
  InRoman(n);
  return 0;
}
