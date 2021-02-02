#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void array_order(int *array, int len){
  for(int i = len - 1; i >= 0; i--){
    printf("%d ", array[i]);
  }
  printf("\n");
}

void array_display(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int array[] = { 1, 2, 3, 4 };
  int len = sizeof(array)/sizeof(array[0]);
  int size = *(&array + 1) - array; // same as the line above ;)

  array_display(array, size);

  puts("");

  array_order(array, len);
  return 0;
}
