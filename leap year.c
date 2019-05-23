#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	printf("input year:\n");
	scanf_s("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d is leap year\n", year);
	}
	else printf("%d is not leap year\n", year);
	system("pause");
	return 0;
}
/*Judge whether it's a leap year?*/