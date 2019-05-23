#include<stdio.h>
#include<stdlib.h>
int main()
{
	float applenum = 0;
	int day=0,daynum=2,p;
	printf("Input untill one day do we get apples p:\n");
	scanf_s("%d", &p);
	do
	{
		day++;
		applenum = applenum+daynum;
		daynum *= 2;
	} while (daynum <= p);

	printf("%.4f", (0.8*applenum) / day);
	system("pause");
	return 0;
}
/*Function:each apple cost 0.8;first day get 2 ; get double number of apples next day;calculate how many could we average cost when we get p apple one day*/