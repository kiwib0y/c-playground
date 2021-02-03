#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char string[50];
  scanf("%[^\n]%*c", string);
  int len = strlen(string);
  for (int i = len - 1; i >= 0; i--) {
    printf("%c ", string[i]);
  }
  puts(" ");
  return 0;
}
