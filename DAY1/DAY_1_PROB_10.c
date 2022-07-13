#include<stdio.h>
int main()
{
    int n1;int n2;int n3;
    printf("Enter the weights:\n");
    fflush(stdout);
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
    {
        printf("%d is Heaviest2\n",n1);
    }
   else if(n2>n1&&n2>n3)
    {
        printf("%d is Heaviest\n",n2);
    }
    else if(n3>n1&&n3>n2)
    {
        printf("%d is Heaviest\n",n3);
    }
}
