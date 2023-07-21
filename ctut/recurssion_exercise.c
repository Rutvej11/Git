#include <stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n -2);
    }
}
int fib_iterative(int n)
{
}
int main()
{
    int number;
    printf("Enter the number you want fibonacci series\n");
    scanf("%d", &number);
    printf("Fibonacci series will be at position %d using recurssive approach is %d\n", number, fib_recursive(number));
    printf("Fibonacci series will be at position %d using recurssive approach is %d\n", number, fib_iterative(number));
    return 0;
}