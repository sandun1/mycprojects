#include <stdio.h>

int main(){
	int a[][4] = {{2,4,6,8},{1,3,5,7},{3,6,9,12}};
	int (*p)[4] = a;
	int i;
	size_t rows = sizeof(a)/sizeof(a[0]);
	size_t cols = sizeof(a[0])/sizeof(a[0][0]);	
	printf("rows: %d\n",rows);
	printf("columns: %d\n", cols);
	printf("sizeof(*p) = %d\n", sizeof(*p));
	for(i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
