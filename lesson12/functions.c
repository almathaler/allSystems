#include <stdio.h>
#include <stdlib.h>

double averageArray(int arr[], int size){
  double sum = 0;
  double avg = 0;
  int y;
  for (y=0; y<size; y++){
    sum+=arr[y];
  }
  avg = (sum / size);
  return avg;
}

int copyArray(int *arr, int *arr2, int size){
  int y = size;
  for (y=0; y<size; y++){
    *(arr2+y)=*(arr+y);
  }
  return 0;
}

int lengthOfString(char *s){
  int length = 0;
  while (*s != NULL){
    length++;
    s++;
  }
  return length;
}
