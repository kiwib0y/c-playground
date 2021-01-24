#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){
  int fib = 1, fib_prev = 0;
  int tmp;
  if (num == 0) 
    return 0;
  
  for (int i = 1; i <= num; i++) {
    tmp = fib;
    fib = fib_prev;
    fib_prev = tmp;
    tmp++;
    fib = fib + fib_prev;
  }
  return fib;
}

int main(int argc, char *argv[])
{
  if (argc < 2) {
    printf("ERORR\n");
    exit(0);
  }
  
  int passing = atoi(argv[1]);
  if (passing < 0) {
    printf("ERORR\n");
    exit(0);
  }
  int result = fibonacci(passing);
  printf("Entered fibonacci number is %d\n", result);
  return 0;
  
}
