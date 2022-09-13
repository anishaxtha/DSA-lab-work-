//product to find the product of two positive integers
#include<stdio.h>
int product (int x, int y)
{
	if (y==0)
	return 0;
	else
	return x+product (x, y-1);
}
int main()
{
	int x, y, P;
	printf("Enter the value of x and y :");
	scanf("%d%d",&x,&y);
	P=product(x,y);
	printf("Required value %d*%d=%d",x,y,P);
	return  0;
}

