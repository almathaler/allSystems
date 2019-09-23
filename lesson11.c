#include <stdio.h>
#include <stdlib.h>

int averageArray(int arr[]){
  int size = 0;
  int sum = 0;
  while(arr[size] != NULL){
    sum+=arr[size];
    size++;
  }
  printf("size: %d \n", size);
  printf("sum: %d \n", sum);
  return sum / size;
}

int main(){
  int array10[10];
  int y;
  for (y=0; y<10; y++){
    array10[y] = y;
  }
  int avg = averageArray(array10);
  printf("avg: %d \n", avg);
  return 0;
}
