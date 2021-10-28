#include <stdio.h>

long Factorial(int n) {
  if (n > 0) {
    return n * Factorial(n-1);  
  } else {
    return 1;
  }
}

int Fibonacci(int n) {
  if (n==1 || n==2) {
    return 1;
  } else {
    return Fibonacci(n-2) + Fibonacci(n-1);
  }
}

int GCD(int a, int b) {
  if (a >= b && a%b==0) {
    return b;
  } else if (a < b) {
    return GCD(b, a);
  } else {
    return GCD(b, a%b);
  }
}

double Power(double x, int n) {
  if (n == 0) {
    return 1;
  } else if (n > 0) {
    return (x * Power(x, n-1));
  } else {
    return (1/x * Power(x, n+1));
  }
}

void ReversePrinting(void) {
  char ch;
  if((ch=getchar())!='\n') {
    ReversePrinting();
  }
  putchar(ch);
}

void ToHex(int n) {
  char *htab[] ={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
  if (n > 15) {
    ToHex(n/16);
  }
  printf("%s", htab[n%16]);
}

void InWord(int n) {
  char *wtab[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

  if (n>9) {
    InWord(n/10);
  }
  printf("%s", wtab[n%10]);
}

int main() {
  printf("number 10\n");
  long facto = Factorial(10);
  int  fibo  = Fibonacci(10);
  printf("Factorial 10: %ld\n", facto);
  printf("Fibonacci 10th: %d\n", fibo);
  printf("start reverse printing\n\n");
  ReversePrinting();
  printf("print decimal in words 123\n");
  InWord(123);
  return 0;
}


