#include <stdio.h>

int main(){
	int a[][3][4] = {{{1,2,3,4},{2,3,4,5},{3,4,5,6}},{{2,4,6,8},{3,5,7,9},{1,3,5,7}},{{6,5,4,3},{8,7,6,5},{9,7,5,3}}};
	int (*p)[3][4] = a;
	//int i;
	size_t ntables = sizeof(a)/sizeof(a[0]);
	size_t nrows = sizeof(a[0])/sizeof(a[0][0]);
	size_t ncols = sizeof(a[0][0])/sizeof(a[0][0][0]);
	printf("tables: %d, rows: %d, columns: %d and size of (*p): %d\n", ntables, nrows, ncols, sizeof(*p));
	for (int i = 0; i<ntables; i++){
		for(int j=0; j<nrows; j++){
			for(int k=0; k<ncols; k++){
				printf("%d ",p[i][j][k]);
			}
		printf("\n");
		}	
	printf("\n");
	}
	return 0;

}

