#include <stdio.h>
#include <stddef.h>

int main(){
	float a[] = {1.0, 2.0, 3.0}, *p = &a[0];
	ptrdiff_t diff;

	printf("size of float == %lu\n", sizeof(float));
	printf("p == %p and *p == %f\n", p, *p);
	p+=2;
	printf("p == %p and *p == %f\n", p, *p);
	diff = p - a;
	printf("p-a == %d\n", diff);	
	diff = (char*)p - (char*)a;
	printf("p-a char == %d\n", diff);
	return 0;

}
