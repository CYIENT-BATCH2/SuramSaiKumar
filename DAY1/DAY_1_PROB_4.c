#include<stdio.h>
int main()
{
	int n;int reminder;int reverse=0;
	printf("Enter the number:\n");
	fflush(stdout);
	scanf("%d",&n);
	loop:
	if(n!=0)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n=n/10;
		goto loop;
	}
	printf("The reversed number is %d",reverse);
}
