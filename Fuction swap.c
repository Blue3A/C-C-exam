#include<stdio.h>
void swap(int* x, int* y)
{
	int c=*x ;
	 *x = *y; *y = c;
	return;
}
int main()
{
	int a = 3, b = 5;
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
//the fuction of swa
p by pointers





