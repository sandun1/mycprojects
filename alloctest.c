#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WIDTH 81
#define MAX_LINES 5

int main (){
	char*	lines[MAX_LINES];
	char	line[MAX_WIDTH];
	int i, n;

	for(n=0; n<MAX_LINES && gets(line) != NULL; ++n){
		if((lines[n] = malloc(strlen(line)+1)) == NULL)
			exit(1);
	strcpy(lines[n], line);
	}
	
	printf("\n--OUTPUT--\n");	
	for(i=0; i<n; ++i){
		puts(lines[n-i-1]);
		free(lines[n-i-1]);
	}
	return 0;
}
