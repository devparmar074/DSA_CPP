#include<iostream>
using namespace std;

void Reverse(int arr[], int start, int end)
{
	if(start >= end)
	{
		return ;
	}
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end ] = temp;
	
	Reverse(arr, start+1, end-1); 
}

void Print(int arr[], int size)
{
	for(int i=0; i<=size; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1,2,3,4,5};
	Reverse(arr,0,4);
	Print(arr,4);
	
	return 0;
}
