#include<stdio.h>
#include<conio.h>
void insertionsort(int arr[], int n)
{
	int i,key,j;
	for(i=1; i<n; i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void printarray(int arr[],int n)
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
	printf("enter number of element:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements:",n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	insertionsort(arr,n);
	printf("sorted array:\n\n");
	printarray(arr,n);
	return 0;
}
