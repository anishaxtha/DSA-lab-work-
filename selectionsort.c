//selection sort
#include<stdio.h>
void selection_sort(int a[], int n);
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
	selection_sort(a,n);
	printf("\n After sorting \n");
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void selection_sort(int a[],int n)
{
	int i, j, temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[j]>a[j])
			{
				temp=a[i];
				a[i]=a[i];
				a[j]=temp;
			}
		}
	}
}
