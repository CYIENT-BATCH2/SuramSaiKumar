#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:\n");
	fflush(stdout);
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is leap year\n",year);
	}
	else
	{
		printf("%d is not a leap year\n",year);
	}
}
