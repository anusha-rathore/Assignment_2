#include<stdio.h>
int main()
{
    short int number,sum=0;
    printf("enter threee digit  number\n");
    scanf("%d",&number);
    sum= number % 10 + (number/10)%10 + number/100;
    printf("%d",sum);
    return 0;
}