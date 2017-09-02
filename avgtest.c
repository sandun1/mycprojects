/*this is a test for functions */

#include <stdio.h>

float avg (int a, int b);

int main(){
	int x, y;
	printf("Enter the first number: ");
	scanf("%d",&x);
	printf("Enter the second number: ");
	scanf("%d",&y);
	printf("The average is: %f\n", avg(x,y));
	return 0;
}

float avg (int a, int b){
	return (a+b)/2.0;
}
