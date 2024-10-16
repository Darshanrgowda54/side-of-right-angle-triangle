#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("Enter the value of :");
    scanf("%ld" ,&a);

    printf("Enter the value of :");
    scanf("%ld" ,&b);

    int c = sqrt((a*a)+(b*b));
    printf("the result is %d\n" ,c);

    return 0;
}
