#include <stdio.h>
#include <stdlib.h>
#include "functionHeaders.h"
int ARR_SIZE = 10;

int main(){
  //1
  printf("making array1 \n");
  int array[ARR_SIZE];
  int y;
  for (y=0; y<ARR_SIZE; y++){
    array[y] = y;
    printf("just added %d \n", y);
  }
  double avg = averageArray(array, ARR_SIZE);
  printf("avg: %f \n", avg);\
  //2
  printf("\nmaking array2: \n");
  int array2[ARR_SIZE];
  for (y=0; y<ARR_SIZE; y++){
    int toAdd = 10 - y;
    array[y] = toAdd;
    printf("just added %d \n", toAdd);
  }
  int *arr = array;
  int *arr2 = array2;
  copyArray(arr, arr2, ARR_SIZE);
  printf("Here is what arr2 looks like now: \n");
  for (y=0; y<ARR_SIZE; y++){
    printf("here is arr2[%d]\n", y);
  }
  //3
  char s[] = "alma";
  char *sP = s;
  int lengthS = lengthOfString(sP);
  printf("\nthe length of 'alma' is: %d \n", lengthS);
  return 0;
}
