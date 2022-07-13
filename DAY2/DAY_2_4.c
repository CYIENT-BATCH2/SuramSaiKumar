#include<stdio.h>
int main()
{
	long int rem;int num;int count=0;
	printf("Enter the Loterry Tickets:\n");
	fflush(stdout);
	scanf("%d",&num);
	loop:
	if(num!=0)
	{
		rem=num%10;
		if(rem==3)
			count++;
		num/=10;
		goto loop;
	}
if(count>0)
{
	printf("%d",count);
}
}
