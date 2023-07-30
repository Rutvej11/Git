#include <stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}
int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int main()
{
    /* code */
    int n;
    printf("Enter the position at which you want fibonacci series\n");
    scanf("%d",&n);
    printf("the fibonacci series at%d is %d\n",n,fib_recursive(n));
    printf("the fibonacci series at%d is %d\n",n,fib_iterative(n));
    return 0;
}
