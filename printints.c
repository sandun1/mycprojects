/* this is to primt int */

#include <stdio.h>

void printint(int intar[]){
 	printf("%ld\n", sizeof(intar));
	printf("%ld\n", sizeof(intar[0]));
	for(int a = 0; a <4/*(sizeof(intar)/sizeof(intar[0]))*/; a++){
		printf("%d\n", intar[a]);
		}
}

int main(){
	int intar_new[] = {2, 4, 6, 8, 10};
	printint(intar_new);
	return 0;
}
