#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,x,y;
	printf("input a number that you wanna transform i:\n");
	scanf_s("%d", &i);
	for (x=7;x>= 0;--x)
	{
		y = (i >> x) & 01;//����iλ�����ڳ���2^i�Σ�����i-1λ���ܲ��㣬������Ҫ &01����ȡ
		printf("%d", y);
	}
	//printf("The hexadecimal express of i is 0x%x\n", i);//ת����ʮ�����ƣ���Ӧ�ַ����%x��ʽ
	//printf("The octal express of i is %04o\n", i);//ת���ɰ˽��ƣ���Ӧ�ַ���ʽ%o��04��ʾռ�ĸ��ַ���ȣ��������0����
	system("pause");
	return 0;
}