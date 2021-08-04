///Program to Swap Two Numbers

#include<stdio.h>
int main()
{
	int s1, s2, temp;
	printf("Enter two inputs:");
	scanf("%d %d",&s1, &s2);
	temp=s1;
	s1=s2;
	s2=temp;
	printf("After swapping: %d %d",s1,s2);
	return 0;
}
