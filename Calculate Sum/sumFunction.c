#include <stdio.h>

int sum(int num1, int num2)
{

    int sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);
}

int main()
{
    int x, y;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);

    sum(x,y);
}