//program to solve quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, D, root1, root2;
	printf("Enter the coefficient of x^2: ");
	scanf("%f",&a);
	printf("Enter the coefficient of x: ");
	scanf("%f",&b);
	printf("Enter the constant term: ");
	scanf("%f",&c);
	D = pow(b,2)-(4*a*c);
	
    if(D>0){
    	root1 = (-b + sqrt(D))/(2.0*a);
    	root2 = (-b - sqrt(D))/(2.0*a);
    	printf("The roots of the equation are:\n\n%f , %f",root1, root2);
    }
    else if(D == 0){
        root1 = -b/(2*a);
        printf("The root of the equation are:\n\n%f",root1);
    }
	
	else{
	    float realPart = -b/(2.0*a);
	    float imaginaryPart = sqrt(-D)/(2.0*a);
	    printf("The roots of the equation are:\n\n%f+%f , %f-%f",realPart,imaginaryPart,realPart, imaginaryPart);
	}
	return 0;
}