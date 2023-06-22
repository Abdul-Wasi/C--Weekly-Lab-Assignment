#include<Stdio.h>
int main(){
	printf("Hye! I will calculate the determinant of a 3*3 matrix\n");
	float a11, a12, a13, a21, a22, a23, a31, a32, a33, det;
	printf("Enter term 1,1: ");
	scanf("%f", &a11);
	printf("Enter term 1,2: ");
	scanf("%f", &a12);
	printf("Enter term 1,3: ");
	scanf("%f", &a13);
	printf("Enter term 2,1: ");
	scanf("%f", &a21);
	printf("Enter term 2,2: ");
	scanf("%f", &a22);
	printf("Enter term 2,3: ");
	scanf("%f", &a23);
	printf("Enter term 3,1: ");
	scanf("%f", &a31);
	printf("Enter term 3,2: ");
	scanf("%f", &a32);
	printf("Enter term 3,3: ");
	scanf("%f", &a33);
	det = a11*((a22*a33)-(a23*a32)) - a12*((a21*a33)-(a23*a31)) + a13*((a21*a32)-(a22*a31));
	printf("The determinant of matrix is: %f", det);
	return 0;
}