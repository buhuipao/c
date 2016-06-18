#include<stdio.h>

int main(void)
{
    int i; 
    char str[6] = "hello"; 
    char reverse_str[6] = ""; 

    printf("%s\n",str); 
    for (i =0; i < 5; i++)
        /*here not set 5-i ,because if print a string ,it will end by NULL,in gdb it like this :"\000olleh", will have nothing to print */
        reverse_str[4-i] = str[i]; 
    printf("%s\n",reverse_str); 
    return 0; 
}
