#include <stdio.h>

void swap (int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int i = 1;
	int j = 8;
	printf("i ==  %d and j ==  %d\n", i, j);
	swap(&i, &j);
	printf("swapping...\n");
	printf("i ==  %d and j ==  %d\n", i, j);
	return 0;
}
