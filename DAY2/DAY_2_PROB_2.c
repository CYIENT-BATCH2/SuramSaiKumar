#include<stdio.h>
int main()
{
	int num;int position;
	printf("Enter the number:\n");
	fflush(stdout);
	scanf("%d",&num);
	loop:
	if(position>0)
	{
		printf("%d",(num>>position)&1);
		position--;
		goto loop;
	}
}
