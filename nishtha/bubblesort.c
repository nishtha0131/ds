#include<stdio.h>
#include<conio.h>
void bubblesort(int arr[],int n)
{
	int i,j,temp;
	int swapped;
	for(i=0; i<n-1; i++)
	{
		swapped=0;
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;
			}
		}
		if(swapped==0)
		break;
	}
}
void printarray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
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
	bubblesort(arr,n);
	printf("sorted array:\n\n");
	printarray(arr,n);
	return 0;
}
