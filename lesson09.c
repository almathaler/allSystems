#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //S1
  int ARR_SIZE = 10;
  int randArray[ARR_SIZE];
  //S2
  srand( time(NULL) );
  int x;
  for (x = 0; x<9; x++){
    int y = rand();
    randArray[x] = y;
  }
  //S3
  randArray[9] = 0;
  //S4 Check
  for (x=0; x<10; x++){
    printf("this is the %dth val in randArray: %d \n", x, randArray[x]);
  }
  //S5
  int reverseArray[ARR_SIZE];
  //S6
  printf("\nNow doing reverse: \n");
  int *rPointer = reverseArray;
  for (x=9; x>=0; x--){
    *rPointer = randArray[x];
    rPointer++;
  }
  for (x=0; x<10; x++){
    printf("this is the %dth val in reverseArray: %d \n", x, reverseArray[x]);
  }
  //
  return 0;
}
