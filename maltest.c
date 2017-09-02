#include <stdio.h>
#include <stdlib.h>

typedef struct rec {
	char name;;
	int size;
} RECORD;

int main(){
	RECORD *ptr_one;
	ptr_one = malloc(sizeof(RECORD));

	ptr_one->name = 'a';
	ptr_one->size = 1;

	printf("name: %c\n", ptr_one->name);
	printf("size: %d\n", ptr_one->size );

	free(ptr_one);
	return 0;
}
