#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		
	}
	//cout<<endl;
}

void swaparr(int arr[], int size)
{
	for(int i = 0; i < size; i+=2)
	{
		if(i+1 < size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}

int main()
{
//	int sample[6] = {2,4,6,8,1,3};
//	swaparr(sample,6);
//	printarray(sample,6);

	int size;
	cin>>size;
	int oddnum[size];
	for(int i =0; i<size; i++)
	{
		cin>>oddnum[i];
	}
	
	swaparr(oddnum,size);
	printarray(oddnum,size);
	
//	cout<<endl;
	
	return 0;
}

