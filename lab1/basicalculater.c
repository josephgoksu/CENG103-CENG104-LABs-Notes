#include <stdio.h>

int main()

{

int num1, num2;
char opt;

printf("Please write +, - or x\n");
scanf("%c", &opt);

printf("Write your two number\n");
scanf("%d%d", &num1, &num2);

switch(opt) {
	case '+':
	printf ("%.1d + %.1d = %.1d", num1, num2, num1 + num2);
	break;

	case '-':
	printf ("%.1d - %.1d = %.1d", num1, num2, num1 - num2);
	break;

	case 'x':
	printf ("%.1d * %.1d = %.1d", num1, num2, num1 * num2);
	break;

	default:
	printf("write again");
}

}
