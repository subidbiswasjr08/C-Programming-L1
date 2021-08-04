///C Program to Add Two Integers (Input by the User)

#include<stdio.h>
int main()
{
	float a, b, sum;
	printf("Enter any two numbers: ");
	scanf("%f %f", &a, &b);
	printf("The sum of two integers %.1f + %.1f = %.2f", a, b, sum=a+b);
	return 0;
}
