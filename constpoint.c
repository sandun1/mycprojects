#include <stdio.h>

int main(){
	const int* p;
	int* const q;
	*p = 5;
	++p;
	*q = 5;
	++q;
}
