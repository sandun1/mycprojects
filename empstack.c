/* empstack.c */


#include <stdio.h>
#include <string.h>
#include "empstack.h"



#define MAX 10

static int iIndex = 0;

struct Employee {
	char fname[10];
	char lname[10];
	int salary;
};

static struct Employee emp_array[MAX];

int  addEmp(char fname[10], char lname[10], int salary){
	struct Employee emp;
	strcpy(emp.fname,fname);
	strcpy(emp.lname,lname);
	emp.salary = salary;
	printf("addEmp - iIndex is: %d\n", iIndex);
	emp_array[iIndex++] = emp;
	printf("addEmp - iIndex after is: %d\n", iIndex);
	return 0;
}

void printEmp(){
	printf("entering printEmp... \n");
	for(int i=iIndex; i>=0; i--){
		printf("AddEmp - i is: %d\n", i);
		printf("%s\n",emp_array[i].fname);
		printf("%s\n",emp_array[i].lname);
		printf("%d\n",emp_array[i].salary);	
	}
}
