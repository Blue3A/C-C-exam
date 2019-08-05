#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str1[100], str2[10];//define two arraies for char;str-lenth within 100 and 10
	char *p, *q; int locat[10];// location of str2 within str1
	int j, len2=0, i = 0,t=0, posit = 0;
	printf_s("Please input string1:\n");scanf_s("%s",str1,100);
	printf_s("Please input string2:\n");scanf_s("%s", str2, 10);
	q = str2;
	for (j = 0; *q != '\0'; j++, q++) len2 = j;//figure out the lenth of string2
	p = str1;q = str2;
	do
	{
		if (*p != *q) { p++; posit++; }
		else
		{
			while ((*q != '\0' && *q == *p))
			{
				q++; p++; posit++; t++;
			}//keep juding if find a same word
			if (*q == '\0')
			{
				locat[i] = posit - len2;
				i++;
			}
		}
		q = str2; p = p - t + 1;
	}while (*p != '\0');
	printf("string1:%s\nstring2:%s\n",str1, str2);
	printf("occured %d times,and what position is:", i);
	for (j = 0; j < i; j++)
		printf("\n");
	system("pause");
	return 0;
}
/*Input string1 and string2,then check out whether contain string2 within string1 and output occured times and init position */