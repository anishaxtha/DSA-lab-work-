//bubble sort
#include<stdio.h>
void bubble_sort(int a[], int n);
int main()
{
	int a[50], n, i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("\n Enter %d elements",n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Before sorting \n ");
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
	bubble_sort(a,n);
	printf("\n After sorting \n");
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void bubble_sort(int a[],int n)
{
	int i, j, temp;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
