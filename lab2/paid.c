#include <stdio.h>

int main()
{
	int works;
	int hours;
	int extra = 10;
	int sum;
	int sum2;
	
	while (works!=-1){

	printf("Enter hourly rate of the worker ($00.00): \n");
	scanf("%d", &hours);
	printf("Enter # of hours worked: \n");
	scanf("%d", &works);
	

		if(works == -1){
			printf("Program is closing now");
			return 0;
		}

		if (works <= 40){
			sum = works * hours;
			printf("Salary is %d \n", sum);
		}
		
		if (works > 40){
			sum2 = works * hours + extra;
			printf("Salary is %d \n", sum2);
		}
	}
}
