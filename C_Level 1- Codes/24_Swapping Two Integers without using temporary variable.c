//C Program to Swap Two Numbers without temporary space

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two inputs:");
	scanf("%d %d",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After swapping: %d %d",a,b);
	return 0;
}
