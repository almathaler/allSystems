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

int copyArray(int *arr, int *arr2){
  int y = ARR_SIZE;
  for (y=0; y<ARR_SIZE; y++){
    *(arr2+y)=*(arr+y);
  }
  return 0;
}

int main(){
  //1
  printf("making array1 \n");
  int array[ARR_SIZE];
  int y;
  for (y=0; y<ARR_SIZE; y++){
    array[y] = y;
    printf("just added %d \n", y);
  }
  double avg = averageArray(array);
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
  copyArray(arr, arr2);
  printf("Here is what arr2 looks like now: \n");
  for (y=0; y<ARR_SIZE; y++){
    printf("here is arr2[%d]\n", y);
  }

  return 0;
}
