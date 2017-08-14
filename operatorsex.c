#include <stdio.h>

int main(){
	int a=0, ev=0, od=0;
	for(int i=0; i <3; i++){
		printf("Enter the %d number:",i+1);
		scanf("%d",&a);
		a%2?(ev=ev+a):(od=od+a);
		printf("sum of even is %d and odd is %d\n", ev, od);
	}
}
