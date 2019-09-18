#include<stdio.h>
#include<unistd.h>

int main()
{
	int x,ap,bp,ac,bc;
	x=fork();
	if(x==0)
	{
		for(ac=1;ac<=4;ac++)
		{
			for(bc=1;bc<=ac;bc++)
			{
				printf("%d",bc);
				sleep(1);
			}
			printf("\n");
		}
	}
	else
	{
		for(ap=1;ap<=4;ap++)
		{
			for(bp=1;bp<=bp;bp++)
			{
				printf("*");
				sleep(1);
			}
			printf("\n");
		}
	}
	return 0;
}
