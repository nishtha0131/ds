#include<stdio.h>
int binarysearch(int arr[], int left , int right, int key)
{
	while(left <= right)
	{
		int mid=left+(right-left)/2;
		if(arr[mid] == key)
		return mid;
		if(arr[mid] < key)
		left=mid+1;
		else{
		right=mid-1;
	    }
	}
	return -1;
}
int main()
{
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int key=10;
	int result=binarysearch(arr,0,size -1,key);
	if(result != -1){
	printf("element found at index %d\n",result);
     }
	else{
		printf("element not found\n");
	}
	return 0;
}
