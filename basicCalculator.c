//program to perform basic arithmeic functions (Calculator)
#include<stdio.h>
int main(){
	float num1, num2, sum, diff, mult, divi;
	int operation;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);	
	printf("Enter 1 for +, 2 for -, 3 for *,4 for / ");
	scanf("%d", &operation);
	sum = num1+num2;
	diff = num1-num2;
	mult = num1*num2;
	divi = num1/num2;
	
	if (operation == 1){
		printf("The sum is: %f", sum);
	}
	else if (operation == 2){
		printf("The difference is: %f", diff);
	}
	else if (operation == 3){
		printf("The difference is: %f", mult);
	}
	else if (operation == 4){
		printf("The difference is: %f", divi);
	}
	
	return 0;
	
}