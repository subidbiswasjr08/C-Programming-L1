///C Program using Math Header File

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,y,z;
	printf("\nEnter the value of x: ");
	scanf("%f",&x);
	printf("\nEnter the value of y: ");
	scanf("%f",&y);
	printf("\nEnter the value of z: ");
	scanf("%f",&z);
	printf("\n%.2f \n%.2f \n%.2f", a=log(x),b=log10(y),c=sqrt(z));
	return 0;
}
