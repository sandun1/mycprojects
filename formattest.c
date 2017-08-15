#include <stdio.h>

int main(){

	char s[] = "hello";
	char string[BUFSIZ];
	sprintf(string, "%s", s+1);
	puts(string);
	return 0;

}
