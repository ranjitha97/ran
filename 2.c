#include <stdio.h>
int main()
{
    int b;

    printf("Enter an integer: ");
    scanf("%d", &b);
    if(b % 2 == 0)
        printf("%d is even.", b);
    else
        printf("%d is odd.", b);

    return 0;
}
