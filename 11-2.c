#include<stdio.h>

#define LEN 5
int a[LEN] = { 10, 4, 3, 2, 7 };

void chooision_sort(void)
{
    int i, j, min, temp;
    for (i = 0; i < LEN; i++) {
        printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
        j = i;
        for ( min = a[j]; a[i+1] < min; j++ ) {
            if ( )
            temp = min;
            min = a[j+1];
            a[j+1] = temp;
        }
        a[i] = min;
    }
        printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
}

int main(void)
            temp = min;
            min = a[j+1];
            a[j+1] = temp;
        }
        a[i] = min;
    }
        printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
}

int main(void)
{
    chooision_sort();
    return 0;
}
