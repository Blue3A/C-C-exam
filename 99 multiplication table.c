#include<stdio.h>
#include<stdlib.h> 
int main()
{
	printf(" 1  2  3  4  5  6  7  8  9\n");
	printf("---------------------------\n");
	int result;
	for (int i = 1;i <= 9;++i)
	{
		for (int j = 1;j <= 9;++j)
		{
			result = i*j;
			printf("%2d ",result);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
/*Output a 99 multiplication table*/