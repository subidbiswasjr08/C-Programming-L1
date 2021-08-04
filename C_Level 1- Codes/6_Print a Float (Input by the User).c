///C Program to Print a Double (Input by the User)

#include<stdio.h>
int main()
{
	double x;
	printf("Enter a Decimal Value: ");
	scanf("%lf", &x);
	printf("%.2lf", x);
	return 0;
}
