//program to find the factorial of an integer using recursion
#include<stdio.h>
long int factorial (int N);
int main()
{
	int N;
	long int f;
	printf("Enter value of N:");
	scanf("%d",&N);
	f=factorial(N);
	printf("\n factorial of %d=%ld",N,f);
	return 0;
}
long int factorial (int N)
{
	if (N==0)
	return 1;
	else
	return N*factorial(N-1);
}

