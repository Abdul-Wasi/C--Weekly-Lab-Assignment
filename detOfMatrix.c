#include<Stdio.h>
int main(){
	printf("Hye! I will calculate the determinant of a 3*3 matrix\n");
	float a11, a12, a13, a21, a22, a23, a31, a32, a33, det;
	printf("Enter term a11: ");
	scanf("%f", &a11);
	printf("Enter term a12: ");
	scanf("%f", &a12);
	printf("Enter term a13: ");
	scanf("%f", &a13);
	printf("Enter term a21: ");
	scanf("%f", &a21);
	printf("Enter term a22: ");
	scanf("%f", &a22);
	printf("Enter term a23: ");
	scanf("%f", &a23);
	printf("Enter term a31: ");
	scanf("%f", &a31);
	printf("Enter term a32: ");
	scanf("%f", &a32);
	printf("Enter term a33: ");
	scanf("%f", &a33);
	det = a11*((a22*a33)-(a23*a32)) - a12*((a21*a33)-(a23*a31)) + a13*((a21*a32)-(a22*a31));
	printf("The determinant of the matrix is: %f", det);
	return 0;
}