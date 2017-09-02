#include <stdio.h>
#include "empstack.h"


int main(){
	char last[10];
	char first[10];
	int sal;
	int select;
	while(1){
		printf("Select the action:\n1. Add Employee\n2. Print Employee\n");
		scanf("%d",&select);getchar();
		printf("slect is : %d", select);
		if(select == 2){
			printf("test2");	
			break;}
		printf("Enter last name: ");
		gets(last);
		printf("Enter first name: ");
		gets(first);
		printf("Enter salary: ");
		scanf("%d", &sal);
		addEmp(last, first, sal);
		printEmp();}
	printf("test");
	printEmp();
	return 0;
}
