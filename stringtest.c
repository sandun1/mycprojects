#include <stdio.h>
#include <string.h>

int main(){
	char s1[] = "Sandun";
	char s2[] = "Dasanayake";
	//strcpy(s2,s1);
	memcpy(s1,s2,6);
	printf("%s\n",s1);
	printf("%s\n",s2);
	return 0;
}
