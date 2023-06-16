//program to calculate attendance
#include<stdio.h>
int main(){
	float c_held, c_attended, attendance;
	printf("Please enter how many classes have been held: ");
	scanf("%f", &c_held);
	printf("Please enter how many classes have you attended: ");
	scanf("%f", &c_attended);
	attendance = (c_attended/c_held)*100;
	printf("Your attendance is:\n%f %%", attendance);
	return 0;
	
}