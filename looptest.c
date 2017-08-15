/* looptest.c - this is to test the loop */

#include <stdio.h>

int main(){
/*	int i = 0;
	while (i<10){
		printf("%d\n",++i);
	}*/

	int i = 0;
	do
		printf("%d\n",++i);
	while (i < 10);
	return 0;
}
