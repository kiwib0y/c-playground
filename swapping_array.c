#include <stdio.h>
#include <stdlib.h>

void swap(int *first, int *last){
  int temp = *first;
  *first   = *last;
  *last    = temp;
}
void swapFirstLast(int array[], int size) {
  swap(&array[0], &array[size - 1]);
}

void print_array(int array[], int size){
  for(int i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(array)/sizeof(array[0]);
  puts("First array: ");
  print_array(array, size);
  swapFirstLast(array, size);
  puts("After the swap: ");
  print_array(array, size);
  return 0;
}
