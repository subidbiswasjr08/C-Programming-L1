///C Program to Find Sum, Diff, Pro, Quot(Float) and Remain of two values

#include<stdio.h>
int main()
{
	int a, b, d, p, r, s;
	float q;
	printf("Enter any two numbers:\t");
	scanf("%d %d", &a, &b);
	printf("\nThe sum is %d",s=a+b);
	printf("\nThe diff is %d",d=a-b);
	printf("\nThe product is %d",p=a*b);
	printf("\nThe quotient is %.2f",q=a/b);
	printf("\nThe remainder is %d",r=a%b);
	return 0;
}
