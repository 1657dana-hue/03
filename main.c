#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("input two integers :");
    scanf("%d %d", &a, &b);

    printf("The result is %f\n", (float)a / b);

    return 0;
}