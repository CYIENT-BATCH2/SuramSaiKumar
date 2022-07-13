#include<stdio.h>
int main()
{
    int num;int rev=0;int m;int org;
    printf("Enter the number:\n");
    fflush(stdout);
    scanf("%d",&num);
    org=num;
    while(num>>0)
    {
    m=num%10;
    rev=rev*10+m;
    num=num/10;
    }
    if(org==rev)
    {
        printf("palindrom\n");
    }
    else
    {
        printf("not palindrom\n");
    }
}
