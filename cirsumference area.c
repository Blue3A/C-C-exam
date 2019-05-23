#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415926
int main()
{
	float r, circum, area;
	printf("input r:\n");
	scanf_s("%f", &r);
	circum = 2*PI*r;
	area = PI*r*r;
	printf("circumference=%.2f\n", circum);
	printf("areq=%.2f\n", area);
	system("pause");
	return 0;
}
/*calculating the circumference and area with Radius*/