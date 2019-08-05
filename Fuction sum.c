#include<stdio.h>
int sum(int* array, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *array; array++;
	}return sum;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 }, s;
	s = sum(a,10);
	printf("%d/n", s);
}