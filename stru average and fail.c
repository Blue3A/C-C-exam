#include<stdio.h>
	struct stu 
	{
		int num;  const char*name;
		char sex; float score;
	};
	int ave(struct stu* ps, int n, float* average);
	struct stu boy[4]=
	{
		{11,"liping",'M',45},{12,"zhangpin",'M',62.5},
		{13,"hefan",'F',92},{14,"chenlun",'M',80}
	};
int main()
{
	float average; int m;
	m = ave(boy, 4, &average);
	printf_s("average is %.2f.No pass count=%d\n", average, m); 
	return 0;
}
int ave(struct stu* ps, int n, float* average)
{
	int c = 0, i; float ave, s = 0;
	for(i=0;i<n;i++,ps++)
	{
		s += ps->score;
		if (ps->score < 60) c += 1;
	}
	*average = s / n; return c;
}
/*work out average and sum up failed man*/