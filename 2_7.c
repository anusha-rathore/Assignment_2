#include<stdio.h>
int main()
{
int x=7 ,count=0;
 int result =0;
while ((x!=0))
{
    /* code */
    result = x & 1;
    count++;
    if (result == 1)
    {
        /* code */
        printf("%d", count);
        break;
        x=x>>1;
    }
    return 0;

    }
    
}

