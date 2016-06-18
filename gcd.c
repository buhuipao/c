#include<stdio.h>
/*
 * 最大公约数
 */

void GCD(int x,int y)
{
    int a=x;
    int b=y;
    if ( a < b )
    {
        int c=a;
        a=b;
        b=c;
    }

    if ( a % b == 0)
        printf("%d\n",b);
    else{
        int tmp=b;
        b=a % b;
        a=tmp;
        GCD(a,b);
    }
} 

int main(void)
{
    GCD(64,16);
    GCD(64,24);
    return 0;
}
