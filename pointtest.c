#include <stdio.h>

int main(){
	int p = 7;
	int *ip = &p;
	printf("the integer in the loctaion %p is %d\n",&p, p);
	p = 8;
	printf("the integer in the location %p is changed. New one is %d\n",&p ,*ip);
	return 0;

}
