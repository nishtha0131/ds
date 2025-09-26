#include<stdio.h>
int linearserch(int arr[], int size, int key)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	int result=linearserch(arr,size,key);
	if(result!=-1){
	printf("element found at index %d\n",result);  
    }
    else
    {
    	printf("element not found\n");
	}
	return 0;
}
