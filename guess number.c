#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
	int cp, man,count=0;
	char key;
	srand(time(NULL));
	//printf(" press any key to start\n ");
	do 
	{
		cp = rand() % 100 + 1;
		do
		{
			printf("Input your number:");
			scanf("%d", &man);
			count++;
			if (man > cp) { printf("wrong and biger\n"); }
			else if (man < cp) { printf("wrong and smaller\n"); }
			else { printf("Right\n");	printf("cost %d times to pass\n", count);}
		} while (cp != man && count<10);
		//if (count == 5)count = 0;
		printf(" 5 times already and any key turn to next number\n ", count);
		printf(" Input keyword 'q' for exit\n ");
		scanf("%c", &key);
		if (key != 'q') count=0;
	} while (key != 'q');
	system("pause") ;
	return 0;
}
/*image a number between 1-100;
Only ten times every game and press any key move to next;
right or wrong would be given notes and times you uesed to got it;
Anytime can you input 'q' for exiting game;
*/