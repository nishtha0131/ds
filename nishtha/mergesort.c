#include<stdio.h>
void merge(int arr[], int left, int mid, int right)
{
	int i,j,k;
	int n1=mid-left+1;
	int n2=right-mid;
	int L[n1], R[n2];
	for(i=0; i<n1; i++)
	    L[i]=arr[left+i];
   	for(j=0; j<n2; j++)
	    R[j]=arr[mid+1+j];  
		i=0;
		j=0;
		k=left;
		while(i<n1 && j<n2)
		{
			if(L[i]<=R[j])
			{
				arr[k]=L[i];
				i++;
			}
			else
			{
				arr[k]=R[j];
				j++;
			}
			k++;
		 } 
		 while(i<n1)
		 {
		 	arr[k]=L[i];
		 	i++;
		 	k++;
		 }
		 while(j<n2)
		 {
		 	arr[k]=R[j];
		 	j++;
		 	k++;
		 }
}
void mergesort(int arr[], int left, int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}  
}
void printarray(int arr[], int n)
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
	mergesort(arr,0,n-1);
	printf("sorted array:\n\n");
	printarray(arr,n);
	return 0;
}
