/* this is where the main is */
#include <stdio.h>
#include "calcavg.h"

int main(){
	int a, b;
	printf ("Enter your first number: ");
	scanf("%d",&a);
	printf("Enter your second number: ");
	scanf("%d", &b);
	printf("%f\n",calcavg(a,b));
	return 0; 
}

