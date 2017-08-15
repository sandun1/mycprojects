/*agetest.c - This is about determine someone is old  or not */

#include<stdio.h>

int main(){
	int age;
	char confirm;
	puts("enter your age: ");
	scanf("%d", &age);
	switch(age){
	case 10:
		puts("young");
		break;
	case 20:
		puts("young-middle");
		break;
	case 30:
		puts("middle");
		break;
	case 40:
		puts("old");
		break;
	default:
		printf("are you sure you are %d years old? ", age);
		scanf(" %c", &confirm);
		if(confirm=='Y'| confirm=='y')
			puts("Congrats!");
		else
			puts("I guessed");
	}	

}
