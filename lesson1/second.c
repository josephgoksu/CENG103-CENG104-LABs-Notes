#include <stdio.h>

int main()
{
int num1;
int num2;

printf("enter two integer\n");
printf("write: ");

scanf("%d%d", &num1, &num2);

if (num1 == num2){
printf("%d is equal to %d\n", num1, num2);
}

if (num1 != num2){
printf("%d is not equal to %d\n", num1, num2);
}

return 0;

}
