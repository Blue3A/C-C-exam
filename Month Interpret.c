#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m;
	printf("Input a month number:");
		scanf("%d", &m);
	switch (m)
	{
	case 1: printf("Juanuary"); break;
	case 2: printf("February");break;
	case 3: printf("March");break;
	case 4: printf("April"); break;
	case 5: printf("May"); break;
	case 6: printf("June"); break;
	case 7: printf("July"); break;
	case 8: printf("August"); break;
	case 9: printf("September"); break;
	case 10: printf("Octobar"); break;
	case 11: printf("November"); break;
	case 12: printf("December"); break;
	default: printf("Error");
	}
	system("pause");
	return 0;
}
/*Input a month by number and output month ralatively*/