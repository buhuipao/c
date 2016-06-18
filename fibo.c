#include<stdio.h>

int Fibo(int N)
{
    int n=N;
    if (n==1||n==0)
        return 1;
    else 
    {
        int a=Fibo(n-1);
        int b=Fibo(n-2);
        int c=a+b;
        return c;
    }
}

int main(void) 
{
    printf("%d\n",Fibo(5));
    printf("%d\n",Fibo(2));
    printf("%d\n",Fibo(1));
    printf("%d\n",Fibo(0));
    return 0;
}
