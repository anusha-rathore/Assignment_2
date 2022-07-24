#include<stdio.h>
int main(){
    int number,r;
printf("Enter number\n");
scanf("%d",&number);
number=number/10;
printf("number without its last digit is %d", number);
    return 0;
}