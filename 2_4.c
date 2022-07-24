#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number\n");
    scanf("%d %d", &a,&b);
  printf("number is a=%d b=%d \n", a,b);
   a=a+b;
   b=a-b;
   a=a-b;
  printf(" after swaping number is a=%d b=%d ", a,b);

    return 0;
}