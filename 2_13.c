#include <stdio.h>
int main()
{
    int number, r, r_number;
    printf("enter a three digits number\n");
    scanf("%d", &number);
    r = number%10;
    number = number/10;
    r_number = 100*r + number;
    printf("after rotating one position toward right %d", r_number);
    return 0;
}