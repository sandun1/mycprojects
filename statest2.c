/*statest2.c */
#include <stdio.h>

int main(){
	extern int i;
	int get_j();

	printf("i valud is: %d\n", ++i);
	printf("j value is: %d\n", get_j());
	return 0;
}


