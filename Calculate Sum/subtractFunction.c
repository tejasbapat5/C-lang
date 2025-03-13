#include <stdio.h>

int subtract(int num1, int num2)
{

    int subtract = num1 - num2;

    printf("%d - %d = %d", num1, num2, subtract);
}

int main()
{
    int x, y;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);

    subtract(x, y);
}