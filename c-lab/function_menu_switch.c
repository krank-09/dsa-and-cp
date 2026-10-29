// Menu of arithmetic functions selected with switch.

#include <stdio.h>
int sum(int m, int n)
{
    return (m + n);
}
int diff(int m, int n)
{
    return (m - n);
}
int prod(int m, int n)
{
    return (m * n);
}
int div(int m, int n)
{
    if (n == 0)
    {
        printf("division by 0, not possible\n");
        return 0;
    }
    return (m / n);
}
int rem(int m, int n)
{
    return (m % n);
}
int main()
{
    int a, b, op;
    printf("enter 2 nums : ");
    scanf("%d%d", &a, &b);
    while (1)
    {
        printf("select your operation\n1.addition\n2.substraction\n3.multiplication\n4.division\n5.remainder\n6.exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("the sum is %d\n", sum(a, b));
            break;
        case 2:
            printf("the difference is %d\n", diff(a, b));
            break;
        case 3:
            printf("the product is %d\n", prod(a, b));
            break;
        case 4:
            printf("the answer is %d\n", div(a, b));
            break;
        case 5:
            printf("the remainder is %d\n", rem(a, b));
            break;
        case 6:
            printf("the program has ended\n");
            return 0;
        default:
            printf("invalid input\n");
            break;
        }
    }
    return 0;
}