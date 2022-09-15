//Searching
#include<stdio.h>
void linear_search(int[a], int n, int key)
int main()
{
	int a[50],n, i, key;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("\n Enter the array elements:");
	for (i=0; i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Enter search key:");
	scanf("%d",&key);
	linear_search(a,n, key);
	return 0;
}
void linear_search(int[a], int n, int key)
{
	int i;
	for (i=0;i<n;i++)
	{
		if(key==a[i])
		{
			break;
		}
	}
	if(i==n)
	{
		printf("\n search failure");
	}
	else
	{
		printf("\n search succesful and key %d is at location %d", key, i+1);
	}
}

