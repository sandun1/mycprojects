/*setperm.c - this is about set permutation */

#include <stdio.h>

void permuteSet(char ar[], int size){
	for(int i=0; i<size; i++){
		if(i==(size-1))
		printf("%c\n",ar[i]);
		else
		printf("%c, ",ar[i]);
	}
	
}

int main(){
	char set[] = {'a','b','c','d'};
	permuteSet(set,4);
	return 0;
}
