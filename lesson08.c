#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int i = 2200000000; //100 in binary is: 01100100, in hex: 0x64
  int *p = &i;
  char *c = &i;
  //s2

  printf("here is *p: %p, what it points to: %d \n", p, *p);
  printf("here is *c: %p, what it points to: %hhu \n", c, *c);
  //s3
  printf("\n");
  printf("i in dec: %u (unsigned), signed: %d, i in hex: %x \n", i, i, i);
  //s4
  printf("\n");
  int x;
  for(x = 1; x<5; x++){
      printf("printing out the %d byte of i: hex: %hhx, dec: %hhu\n", x, *c, *c);
      c++;
  }
  c = &i;
  //s5
  printf("\n");
  for (x = 1; x<5; x++){
    *c = *c + 1;
    printf("what c looks like: %p \n", c);
    printf("incremented the %d byte of i. Now i looks like: hex: %x, dec: %u, signed: %d \n", x, i, i, i);
    c++;
  }
  c = &i;
  //s5.5
  printf("\n");
  for(x = 1; x<5; x++){
      printf("printing out the %d byte of i after S5: hex: %hhx, dec: %hhu\n", x, *c, *c);
      c++;
  }
  c = &i;
  //s6
  printf("\nADDING 16");
  i = 2200000000;
  printf("\n");
  for (x = 1; x<5; x++){
    *c = *c + 16;
    printf("where c is: %p \n", c);
    printf("incremented the %d byte of i. Now i looks like: hex: %x, dec: %u, signed: %d \n", x, i, i, i);
    c++;
  }
  c = &i;
  //s6.5
  printf("\n");
  for(x = 1; x<5; x++){
      printf("printing out the %d byte of i after S5: hex: %hhx, dec: %hhu\n", x, *c, *c);
      c++;
  }
  c = &i;

  return 0;
}
