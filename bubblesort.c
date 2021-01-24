#include <stdio.h>
#include <stdlib.h>

void swap(int *first, int *second){
  int temp = *first;
  *first = *second;
  *second = temp;
}
void bubble_sort(int array[], int size){
  for (int i = 0; i < size - 1; i++)
    for (int j = 0; j < size - i - 1; j++)
      if (array[j] > array[j + 1])
        swap(&array[j], &array[j + 1]);
}
void print_array(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(int argc, char const *argv[]) {
  int array[] = {44, 12, 2, 1, 13, 7, 65};
  int size = sizeof(array)/sizeof(array[0]);

  printf("Pre-sorted array: \n");
  print_array(array, size);
  bubble_sort(array, size);
  printf("Sorted array: \n");
  print_array(array, size);
  return 0;
}
