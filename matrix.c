#include<stdio.h>
#include<stdlib.h>

void matrix_print(int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)
			if ((i+j) % 2 == 0)
				printf("1 ");
			else
				printf("0 ");
	printf("\n");
	}
}

int main(int argc, const char **argv){
	int size = atoi(argv[1]);
	matrix_print(size);
	return 0;
}
