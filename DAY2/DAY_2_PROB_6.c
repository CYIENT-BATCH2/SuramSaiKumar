#include<stdio.h>
int main()
{
	float celsius;float farenheit;
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter the value of celsius:\n");
		fflush(stdout);
		scanf("%f",&celsius);
		farenheit=(1.8*celsius)+32;
		printf("%f",farenheit);
	}
	if(choice==2)
	{
		printf("Enter the value of farenheit:\n");
		fflush(stdout);
		scanf("%f",&farenheit);
		celsius=(farenheit-32)*5/9;
		printf("%f",celsius);
	}
}
