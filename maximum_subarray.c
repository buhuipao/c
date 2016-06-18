#include<stdio.h>
# maximum_subarray.c

int Maxsubarray(const int A[], int N)
{
    int Nowsum, Maxsum, j;
    Nowsum = Maxsum = 0;
    for( j = 0; j < N; j++)
    {
        Nowsum += A[j];
        if( Nowsum > Maxsum)
            Maxsum = Nowsum;
        else if( Nowsum < 0 )
            Nowsum = 0;
    }
    return Maxsum;
}
