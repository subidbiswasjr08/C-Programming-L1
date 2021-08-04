///C Program using Math Header File (pow)

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,n,r;
	printf("\nEnter the values of a and b: ");
	scanf("%f %f", &a,&b);
	printf("\nEnter the base value: "); scanf("%f",&c);
	printf("\nEnter the power: "); scanf("%f",&n);
	r=(a/b)+pow(c,n);
	printf("\n(%.1f/%.1f) + %.1f^%.1f: %.2f" ,a,b,c,n,r);
	return 0;
}

