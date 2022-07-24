#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two number\n");
    scanf("%d %d", &a,&b);
  printf("number is a=%d b=%d \n", a,b);

  temp=a;
  a=b;
  b=temp;
  printf(" after swaping number is a=%d b=%d ", a,b);

    return 0;
}