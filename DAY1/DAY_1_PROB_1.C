#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to know special or not\n");
    scanf("%d",&num);
    //scanf("%d",&num);
    if(num%11==0||num%11==1)
    {
        printf("special\n");
    }
    else
    {
        printf("Number is not a special number\n");
    }
}
