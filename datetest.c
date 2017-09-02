#include <stdio.h>


struct Date {
	int date;
	int month;
	int year;
}

printdate (struct Date* dt){
	printf("Date is: %d/%d/%d\n",dt->date, dt->month, dt->year);
}

int main(){
	struct Date dts = {21,7,2008};
	printdate(&dts);
	return 0;
}
