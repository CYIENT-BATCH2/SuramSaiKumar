#include<stdio.h>
int main()
{
	int num;int b;
	printf("Enter the number:\n");
	fflush(stdout);
	scanf("%d",&num);
	b=num*(num-1);
	printf("b=%d\n",b);
}
