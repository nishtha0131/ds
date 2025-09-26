#include<stdio.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionsort(int arr[], int n)
{
	int i,j,minIndex;
	for(i=0; i<n-1; i++)
	{
		minIndex=i;
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex=j;
			}
		}
		swap(&arr[minIndex], &arr[i]);
	}
}
void printArray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\n\n",arr[i]);
	}
	printf("\n\n");
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
	selectionsort(arr,n);
	printf("sorted array:\n\n");
	printArray(arr,n);
	return 0;
}
