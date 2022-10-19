#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two positive integer numbers: ");
    scanf("%d%d", &a, &b);

    if(a>b)
        printf("A is larger");

    else if(b > a)
        printf("B is larger");

    else
        printf("They are equal");

    return 0;
}
