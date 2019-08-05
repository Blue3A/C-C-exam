#include<stdio.h>
#include<string.h>
char* match(char c, char* sp)
{
	int count = 0;
	while (c != sp[count] && sp[count] != '\0')
		count++;
	if (sp[count])
		return(&sp[count]);
	return(0);
}
int main()
{
	char s[80], ch, * p;
	int pos;
	gets_s(s);
	ch = getchar();
	p = match(ch, s);
	if (p)
	{
		pos = strlen(s) - strlen(p) + 1;
		printf("%s %d\n", p, pos);
	}
	else printf("no match found");
}
/*function of match*/