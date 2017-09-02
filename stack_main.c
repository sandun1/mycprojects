#include <stdio.h>
#include "stack.h"


int main(){
	while (1){
	int op;
	printf("Select the operation that you want:\n1.Push\n2.Pop\n3.Size\n4.Top\n5.Error\n0.Ene\n");
	scanf("%d",&op);
	if(op==0)
		break;
	switch(op){
		case 1:{
			int val;
			printf("Enter value to push: ");
			scanf("%d", &val);
			stk_push(val);
			if(!stk_error())
				printf("sucess\n");
			else
				printf("fail\n");
			break;
	
			}
		case 2:	
			printf("The popped value is: %d\n",stk_pop());
			break;
		case 3:
			printf("The size is: %d\n",stk_size());
			break;
		case 4:
			printf("The top value is: %d\n",stk_top());
			break;
		case 5:
			printf("The Error value is: %d\n",stk_error());
			break;
		default:
			printf("Please enter valid operation ID\n");
			break;
	}
	}
	return 0;

}
