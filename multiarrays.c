#include <stdio.h>
#define SIZE1 2;
#define SIZE2 3;

int main(){
	/*int ar1[][2] = {{1,2}, {3,4},{5,6}};
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("%d",ar1[i][j]);
		}
		putchar('\n');
	}*/
	int ar2[][3][2] = {{{1,2},{3,4},{5,6}},{{7,8},{9,0},{1,2}}};
	for(int i = 0; i<2; i++)
		{
		for(int j=0; j<3; j++){
			for (int z=0; z<2; z++){
				printf("%d", ar2[i][j][z]);
			}
			putchar('\n');
		} 
		putchar('\n');
	}
	return 0;
}
