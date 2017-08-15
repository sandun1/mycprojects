/* branchtest.c - this is a test to branches */

#include<stdio.h>
#define SIZE 5

int main(){
	int nums[SIZE] = {23, 12, 30, 25, 11};
	for(int i = 0; i < SIZE; i++){
		if(nums[i]==12){
			goto PRINTS;
		}
		int digi1 = nums[i]%10;
		int digi2 = nums[i]/10;
		if((digi1+digi2)==7){
			puts("Found!");
			break;
		}
	}
	PRINTS: printf("even\n");
	return 0;
}
