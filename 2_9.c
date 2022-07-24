#include<stdio.h>
int main(){
    int a,b,D,c;

    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(char);
    D=sizeof(double);

    printf("%d\n",a);
    printf("%d\n",b);

    printf("%d\n",c);
    printf("%d",D);
    return 0;
}