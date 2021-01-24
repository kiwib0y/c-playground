#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Linked list that links a .txt file

typedef struct character{
  char *name;
  char *gold;
  struct character *next;
} person;

person* create(char *name){
  person *i = malloc(sizeof(person));
  i->name = strdup(name);
  i->gold = "5";
  i->next = NULL;
  return i;
}

void display(person *start) {
  person *i = start;
  while (i != NULL) {
    printf("Name: %sgold:%sK\n\n", i->name, i->gold);
    i = i->next;
  }
}

void release(person *start) {
  person *i = start;
  person *next = NULL;
  while (i != NULL) {
    next = i->next;
    free(i->name);
    free(i);

    i = next;
  }
}

int main(int argc, char const *argv[]) {

  person *start = NULL;
  person *i = NULL;
  person *next = NULL;
  char name[40];

  while (fgets(name,40,stdin) != NULL) {
    next = create(name);
    if (start == NULL)
      start = next;
    if (i != NULL)
      i->next = next;

    i = next;
  }

  display(start);
  release(start);

  return 0;
}
