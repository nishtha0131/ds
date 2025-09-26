#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct Node
{
	float data;
	struct Node* next;
};
void insertsorted(struct Node** bucket, float value)
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=NULL;
	if(*bucket == NULL || (*bucket)->data>=value){
		newNode->next=*bucket;
		*bucket=newNode;
	}else{
		struct Node* current=*bucket;
		while(current->next !=NULL && current->next->data<value){
			current=current->next;
		}
		newNode->next=current->next;
		current->next=newNode;
	}
}
void bucketsort(float arr[],int n)
{
	int i;
	struct Node* buckets[MAX]={NULL};
	for(i=0; i<n; i++)
	{
		int bucketIndex=arr[i]*MAX;
		insertsorted(&buckets[bucketIndex],arr[i]);
	}
	int index=0;
	for(i=0; i<MAX; i++)
	{
		struct Node* current=buckets[i];
		while(current != NULL)
		{
			arr[index++]=current->data;
			struct Node* temp=current;
			current=current->next;
		}
	}
}
void printArray(float arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%.2f",arr[i]);
	}
	printf("\n\n");
}
int main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	float arr[n];
	printf("enter %d floating point number betweem 0 and 1:",n);
	for(i=0; i<n; i++)
	{
		scanf("%f", &arr[i]);
	}
	bucketsort(arr,n);
	printf("sorted array:\n\n");
	printArray(arr,n);
	return 0;
}
