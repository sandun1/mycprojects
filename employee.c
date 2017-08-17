/* This is the employee struct */

#include <stdio.h>
#include <string.h>

struct Employee {
	char lastname[16];
	char firstname[12];
	int salary;
};


struct EmpRecord {
	struct Employee emp[10];
	int iEmployees;	
};

int main(){
	struct EmpRecord er;
	er.iEmployees = 0;
	int running = 1;
	while (running){
		printf("Enter last name: ");
		gets(er.emp[er.iEmployees].lastname);
		if(!strlen(er.emp[er.iEmployees].lastname)){
			running = 0;
			break;
		}
		//strcpy(er.emp[er.iEmployees].lastname, ln);
		printf("Enter first name: ");
		gets(er.emp[er.iEmployees].firstname);
		//er.iEmployees++;	
		printf("Enter salary: ");
		scanf("%d", &er.emp[er.iEmployees++].salary);
		getchar();
	}
	
	for(int i=0; i<er.iEmployees; i++){	
		printf("%s %s %d\n",er.emp[i].lastname, er.emp[i].firstname, er.emp[i].salary);
	}
	
	return 0;
}
