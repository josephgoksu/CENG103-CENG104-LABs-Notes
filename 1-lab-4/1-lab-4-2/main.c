#include <stdio.h>
int factorial(int n);
int main(void)
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    printf("Result is %d! = %1d\n", n, factorial(n));
}

int factorial(int n)
{
    if(n!=1)
        return n*factorial(n-1);
}
