#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("A is greater than b and c");
    }
    else
    {
        printf("A is not greater than both b and c");
    }

    return 0;
}