#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h> 
int main()
{
	time_t now;
	struct tm local;
	while (1)
	{
		time(&now);
		localtime_s(&local,&now);
		printf("%2d:%2d:%2d\r", local.tm_hour,local.tm_min, local.tm_sec);
		Sleep (1000);
	}
	system("pause");
		return 0;
}
/*show the clock of your computer*/