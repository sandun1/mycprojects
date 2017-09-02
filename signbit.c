#include <stdio.h>


int main(){
	unsigned int n = 0x00a4;
	printf("0000000010100100\n");
	int m = 0x00a4;
	printf("0000000010100100\n");
	printf("~n is: %08x\n", ~n);
	printf("~m is: %08x\n", ~m);
	printf("~n << 5 is: %08x\n", ~n << 5);
	printf("~m << 5 is: %08x\n", ~m << 5);
	return 0;
	
}
