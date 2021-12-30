#include<iostream>
using namespace std;

int first(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int ans = -1;
	int mid = start + (end-start) / 2;
	
	while(start <= end)
	{
		if(arr[mid] == key)
		{
			ans = mid;
			end = mid -1;
		}
		else if(key > arr[mid])
		{
			start = mid + 1;
		}
		else if(key < arr[mid])
		{
			end = mid - 1;
		}
		mid = start + (end-start) / 2;
	}
	return ans;
}

int last(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int ans = -1;
	int mid = start + (end-start) / 2;
	
	while(start <= end)
	{
		if(arr[mid] == key)
		{
			ans = mid;
			start = mid + 1;
		}
		else if(key > arr[mid])
		{
			start = mid + 1;
		}
		else if(key < arr[mid])
		{
			end = mid - 1;
		}
		mid = start + (end-start) / 2;
	}
	return ans;
}

int main()
{
	int sample[] = {1,2,3,3,3,3,3,4,5};
	int firstindex = first(sample,9,3);
	int lastindex = last(sample,9,3);
	
	cout<<"first index : "<<firstindex<<endl;
	cout<<"last index : "<<lastindex<<endl;

	//cout<<first(sample,9,3);
	return 0;
}
