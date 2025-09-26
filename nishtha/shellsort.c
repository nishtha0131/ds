#include<stdio.h>
void shellsort(int arr[], int n)
{
	int i,gap;
	for(gap=n/2; gap>0; gap/=2)
	{
		for(i=gap; i<n; i++)
		{
			int temp=arr[i];
			int j;
			for(j=i; j>=gap && arr[j-gap]>temp; j-=gap)
			{
				arr[j]=arr[j-gap];
			}
			arr[j]=temp;
		}
	}
}
void printarray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\n\n",arr[i]);
	}
	printf("\n");
}
int main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements:",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	shellsort(arr,n);
	printf("sorted array:\n\n");
	printarray(arr,n);
	return 0;
}
