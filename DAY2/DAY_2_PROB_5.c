#include<stdio.h>
int main()
{
	char ch;char c;
	printf("Enter the number:\n");
	fflush(stdout);
	scanf("%c",&ch);
	if((ch>='0')||(ch<='9'))
	{
		c=ch+16;
	}
	printf("%c",c);
}
