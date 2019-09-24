#include <stdio.h>
#include <stdlib.h>
int ARR_SIZE = 10;

double averageArray(int arr[]){
  double sum = 0;
  double avg = 0;
  int y;
  for (y=0; y<ARR_SIZE; y++){
    sum+=arr[y];
  }
  avg = (sum / ARR_SIZE);
  return avg;
}

int main(){
  int array[ARR_SIZE];
  //int y;
  int y;
  for (y=0; y<ARR_SIZE; y++){
    array[y] = y;
    printf("just added %d \n", y);
  }
  double avg = averageArray(array);
  printf("avg: %f \n", avg);
  return 0;
}
