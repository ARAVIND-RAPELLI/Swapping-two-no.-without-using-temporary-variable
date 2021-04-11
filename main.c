#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b;
    printf("Enter the two numbers to be swapped\n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping: \n a = %d and b = %d\n",a,b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping the values of a =%d and b = %d",a,b);
    return 0;
}
