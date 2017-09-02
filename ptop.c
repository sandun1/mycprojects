#include <stdio.h>

int main(){
	int i = 7;
	int *ip = &i;
	int **ipp = &ip;
	printf("address %p contrains %d\n", &i, i);
	printf("address %p contrains %p\n", &ip, ip);
	printf("address %p contrains %p\n", &ipp, ipp);
	printf("**ipp = %d\n", **ipp);
	return 0;
}
