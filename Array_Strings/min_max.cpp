#include<iostream>
using namespace std;

int Max(int arr[], int n)
{
	int max = INT_MIN;
	for(int i =0; i < n; i++)
	{
		if(arr[i] > max)
		max = arr[i];
	}
	return max;
}

int Min(int arr[], int n)
{
	int min = INT_MAX;
	for(int i =0; i < n; i++)
	{
		if(arr[i] < min)
		min = arr[i];
	}
	return min;
}

int main()
{
	int size;
	cin>>size;
	
	int num[size];
	
	for(int i =0; i< size; i++)
	{
		cin>>num[i];
	}
	cout<<"Minumum : "<<Min(num,size)<<endl;
	cout<<"Maximum : "<<Max(num,size)<<endl;	
	cout<<"Printed";
	return 0;
}
