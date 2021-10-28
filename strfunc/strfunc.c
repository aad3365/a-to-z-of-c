#include<stdio.h>
#include<stdlib.h>

char* _strcpy(char* s, char *t);
char* _strcat(char* s, char *t);
void _strprint(char *s);

int main() {
  char a[] = "apple";
  char *b = (char*)malloc(20*sizeof(char));
  if (b == NULL) {
    printf("memory allocaiton fail\n");
    exit(1);
  }
  _strcat(b, "apple");
  _strcat(b, "bad");
  _strprint(b);
  free(b);
  return 0;
}

char* _strcpy(char *target, char *origin) {
  char *ptr = target;
  while(*target++=*origin++);
  return ptr;
}

void _strprint(char *s) { 
  do {
    printf("%c", *s);
  } while (*s++);
  printf("\n");
}

char* _strcat(char *target, char *origin) {
  char *ptr = target;
  while(*target) {
    target++;
  }
  while(*target++ = *origin++);
  /**
  do {
    *target=*origin;
    target++;
    origin++;
  } while (*origin);
  **/
  return ptr;
}

