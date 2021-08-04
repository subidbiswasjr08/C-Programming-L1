///C Program to Compute Quotient and Remainder

#include<stdio.h>
int main()
{
	int a, b, r;
	float q;
	printf("Enter any two values: ");
	scanf("%d %d", &a, &b);
	q= a/b;
	r= a%b;
	printf("The quotient is %.2f",q);
	printf("\nThe remainder is %d",r);
	return 0;
}
