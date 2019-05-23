#include<stdio.h>
#include<stdlib.h> 
//#include<math.h>
int main()
{
	int n,i;
	printf("Input a positive number n:");
	scanf_s("%d",&n);
	for (;n>1;n--)
	{
		//for (i = 1;i <= sqrt((float)n);i++) //used for judge
		for (i = 2;i <=n;i++)
		{
			if (n%i == 0) { if (n == 2) printf("2\n", n);break; }
			else printf("%d \n", n);break;
		}
	}
	system("pause");
	return 0;
}
/*Below a positive number list its all primes   */