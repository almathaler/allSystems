#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int i = 100; //100 in binary is: 01100100, in hex: 0x64
  int *p = &i;
  char *c = &i;
  //s2
  printf("here is *p: %p, what it points to: %d \n", p, *p);
  printf("here is *c: %p, what it points to: %c \n", c, *c);

  return 0;
}
