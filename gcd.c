#include <stdlib.h>
#include <stdio.h>

// recursive method for greatest common divisor
int ggt(int a, int b){

  if(a == 0){
    puts("You can't divide by ZERO!");
    exit(0);
  }

  if (b == 0)  return a;
  else         return ggt(b, a%b);
}

int main(int argc, char const *argv[]) {
  int a, b;
  puts("Type in first number");
  scanf("%d", &a);
  puts("Type in second number");
  scanf("%d", &b);
  int x = ggt(a, b);
  printf("The GCD is %d\n", x);
  return 0;
}
