#include <stdio.h>
#include <stdlib.h>

int min (int* nums, int size){
	int* end = nums + size;
	int small = *nums;
	while(++nums < end){
		if(*nums<small)
			small = *nums;
	}
	return small;
}

int main(){
	int a[] = {10, 54, 11, 18, 5};
//	printf("Min value is: %d\n", min(&a,5 ));
	printf("a = %p, &a = %p\n", a, &a);
	printf("size is %d\n", sizeof(a)/sizeof(int));
	return 0;
}
