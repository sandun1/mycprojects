/* newbranch.c - this is a modification of the previous */

#include<stdio.h>

int main(){
	while(1){
		int num;
		int dig1, dig2;
		puts("Enter your number: ");
		scanf("%d", &num);
		if(!num)
			break;
		if(!(num%2)){
			puts("Even");
			continue;
		}
		dig1 = num%10;
		dig2 = num/10;
		switch(dig1+dig2){
			case 7:
			puts("Found!");
			break;
			default:
			puts("Try again!");
			break;
		}
	
	}
	return 0;
}
