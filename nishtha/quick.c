#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[], int low, int high)
{
	int j;
	int pivot=arr[high];
	int i=low-1;
	for(j=low; j<high; j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return(i+1);
}
void quicksort(int arr[], int low, int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
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
	for( i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("sorted array:\n\n");
	printarray(arr,n);
	return 0;
}
