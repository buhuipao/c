#include<stdio.h>

long int Pow(long int X, unsigned int N)
{
    if ( N ==0 )
        return 1;
    if ( N == 1)
        return X;
    if ( 0 == N % 2)
        return Pow( X * X, N/2);
    else
        return Pow(X, N-1) * X;
}

int main(void)
{
    printf("%ld\n",Pow(2, 10));
    printf("%ld",Pow(5, 7));
    return 0;
}
