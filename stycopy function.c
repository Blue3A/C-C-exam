#include<stdio.h>
int main()
{
	char s1[50], s2[20], * p1 = s1, * p2 = s2;
	scanf_s("%s", s1,50);
	scanf_s("%s", s2,20);
	while (*p1 != '\0') p1++;
	while (*p2 != '\0') *p1++=*p2++;
	*p1 = '\0';
	printf("%s\n", s1);
	return 0;
}
/*the function of string-copy*/