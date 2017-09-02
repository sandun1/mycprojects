#ifndef EMPPOINT_H
#define EMPPOINT_H

#include <stdio.h>

struct Employee {
	char last[16];
	char first[11];
	char title[16];
	int salary;
};

struct Employee* createEmployee(char* last, char* first, char* title, int salary);

char* getLast(struct Employee* employee);
char* getFirst(struct Employee* employee);
char* getTitle(struct Employee* employee);
int getSalary(struct Employee* employee);
void setLast(struct Employee* employee, char* first);
void setFirst(struct Employee* employee, char* last);
void setTitle(struct Employee* employee, char* title);
void setSalary(struct Employee* employee, int salary);
void printEmployee(struct Employee* employee);

#endif


