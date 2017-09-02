#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "emppoint.h"

struct Employee* createEmployee (char* la, char* fi, char* ti, int sal){
	struct Employee* emp = malloc(sizeof(struct Employee));
	strcpy(emp->first, fi);
	strcpy(emp->last, la);
	strcpy(emp->title, ti);
	emp->salary = sal;
	return emp;
}

char* getLast(struct Employee* emp){
	return emp->last;
}

char* getFirst(struct Employee* emp){
	return emp->first;
}

char* getTitle(struct Employee* emp){
	return emp->title;
}

int getSalary(struct Employee* emp){
	return emp->salary;
}

void printEmployee(struct Employee* emp){
	printf("{%s, %s, %s, %d}\n", getLast(emp), getTitle(emp), getFirst(emp), getSalary(emp));
}
