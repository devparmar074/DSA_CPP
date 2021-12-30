#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
	int start = 0;
	int end = size-1;
	int mid = (start + end) / 2;
	
	while(start <= end)
	{
		if(arr[mid] == key)
		{
		return mid;
		}
		
		if(key > arr[mid])
		{
			start = mid + 1;
			
		}
		else
		{
			end = mid-1;	
		}
		mid = (start + end) / 2;
	}
	return -1;
}
   
int main()
{
	int sample[] = {2,6,8,12,21,30};
	
	int key;
	cin>>key;
	int index = BinarySearch(sample, 7 , key);
	
	cout<<"Index is : "<<index<<endl;
	return 0;
}
