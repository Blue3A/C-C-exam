#include <stdio.h>
#include <stdlib.h>
int main()
{
	float c,f,i;
	printf("Input a Degree Celsius c:");
	i=scanf_s("%f",&c);
	if(i==1)
	{
		f = 9 * c / 5 + 32; 
		printf("Degree Fahernheit is:%.2f\n", f);
	}
	else printf("error\n");
	system("pause");
	return 0;
}
/*Degree Celsius transform to degree Fahernheit*/