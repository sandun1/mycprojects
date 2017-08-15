#include <stdio.h>

#define SIZE 8

int main(){
	int in;
	int nums[SIZE];
	for (int i=0; i <= SIZE; i++){
		printf("Enter number: ");
		scanf("%d", &in);
		if(in && i!=SIZE)
			nums[i] = in;
		else{
			//printf("leaving");
			for(int j=(i-1);j>=0;j--){
				printf("%d\n", nums[j]);
			}
			break;
		}
	}
	
	return 0;
}

