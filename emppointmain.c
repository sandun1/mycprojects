#include <stdio.h>
#include "emppoint.h"


int main(){
	struct Employee* emps[5];
	int nemps = 0;
	emps[nemps++] = createEmployee("San", "Das", "sw", 500);
	emps[nemps++] = createEmployee("Cham", "Das", "cake", 600);
	
	for (int i=0; i<nemps; ++i){
	printEmployee(emps[i]);
}

	return 0;
}
