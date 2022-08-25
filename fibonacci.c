//Wap to find the fibonacci series
#include<stdio.h>
int fibo (int N)
{
	if (N==0||N==1)
	return N;
	else
	return fibo (N-1)+fibo (N-2);
}
int main()
{
	int N,i;
	printf("Enter the value of N:");
	scanf("%d",&N);
	printf("\n fibonacci sequence is \n ");
	for (i=0; i<N; i++)
	{
		printf("%d\t",fibo(i));
	}
	return 0;
}
