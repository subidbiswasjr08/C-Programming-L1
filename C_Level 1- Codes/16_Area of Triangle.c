///C Program to find Area of the Triangle

#include<stdio.h>
int main()
{
	float h, b, A;
	printf("Enter the height and base: ");
	scanf("%f %f",&h, &b);
	printf("The area of the triangle is: %.2f",A=(h*b)/2);
	return 0;
}
