#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character to know vowel or consonant:\n");
    fflush(stdout);
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Entered character is vowel\n");
    }
    else
    {
        printf("Entered character is consonant\n");
    }
}
