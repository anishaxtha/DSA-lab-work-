//Program to find the sum of first N natural numbers using recursion 
#include<stdio.h>
long int sum (int N);
int main()
{
	int N;
	long int f;
	printf("Enter the value of N :");
	scanf ("%d",&N);
	f = sum(N);
	printf("\n Required sum =%ld", f);
	return 0;
}
	long int sum (int N)
	{
		if (N==1)
		return 1;
		else
		return N +sum (N-1);
}

