//insertion sort
#include<stdio.h>
void insertion_sort(int a[], int n);
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
	insertion_sort(a,n);
	printf("\n After sorting \n");
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void insertion_sort (int a[], int n)
{
int i,j, temp;
for (i=0;i<n;i++)
{
	temp=a[i];
	j=i-1;
	while (temp <a[j]&&j>=0)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
}
}
