#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,x,y;
	printf("input a number that you wanna transform i:\n");
	scanf_s("%d", &i);
	for (x=7;x>= 0;--x)
	{
		y = (i >> x) & 01;//左移i位，等于除以2^i次，但是i-1位可能补零，所以需要 &01来提取
		printf("%d", y);
	}
	//printf("The hexadecimal express of i is 0x%x\n", i);//转换成十六进制，对应字符输出%x格式
	//printf("The octal express of i is %04o\n", i);//转换成八进制，对应字符格式%o，04表示占四个字符宽度，不足的用0代替
	system("pause");
	return 0;
}