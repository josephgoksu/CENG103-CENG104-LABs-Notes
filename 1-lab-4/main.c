#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter your number: \n");
    scanf("%d", &x);
    int y;
    printf("Enter your number: \n");
    scanf("%d", &y);
    int sum = sumx(x,y);
    return sum;
}

int sumx(int x, int y)
{
    int sum = x + y;
    printf("sum is %d \n", sum);
}
