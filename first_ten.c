#include <stdio.h>

void first_ten(int n) {
    int result = 0;
    for (int i = 1; i <= 10; i++) {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }
}

int main(int argc, char *argv[]) {

  int n = 2;
  first_ten(n);
  return 0;
}
