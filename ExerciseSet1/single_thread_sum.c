#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NO_OF_ELEMENTS 100000000
static long long int sum;
static int arr[MAX_NO_OF_ELEMENTS];

int main(){
//let the array consists of first MAX_NO_OF_ELEMENTS integers,
//1 to MAX_NO_OF_ELEMENTS
  for (int i = 0; i < MAX_NO_OF_ELEMENTS; i++){
     arr[i] = i + 1;
  }
  //Setup timing
  clock_t start, end;
  double cpu_time_taken;
  start = clock();

  printf("Total sum: %lld\n", sum);
  printf("Time taken to sum all the numbers are %lf\n", cpu_time_taken);
  return 0;
}
