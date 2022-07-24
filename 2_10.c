#include<stdio.h>
int main(){
    int number,r;
printf("Enter number\n");
scanf("%d",&number);
number=number/10;
r=number*10;
printf("%d",r);
    return 0;
}