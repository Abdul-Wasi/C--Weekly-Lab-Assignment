//program to check leap year
#include<stdio.h>
int main(){
	int year;
	printf("Hye! I will check if a year is leap year or not.\n\n");
	printf("Please enter the year: ");
	scanf("%d",&year);
	if(year%4==0){
		printf("Yes, it is a leap year");
	}
	else{
		printf("No, it is not a leap year");
	}
	return 0;
}