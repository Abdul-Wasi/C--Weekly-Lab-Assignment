#include<Stdio.h>
int main(){
	float a, b, c;
	printf("Enter side a: ");
	scanf("%f", &a);
	printf("Enter side b: ");
	scanf("%f", &b);
	printf("Enter side c: ");
	scanf("%f", &c);
	if(a+b > c || b+c > a || a+c > b){
		printf("This is a valid triangle");
	}
	else{
		printf("This is an invalid triangle");
	}
	return 0;
}