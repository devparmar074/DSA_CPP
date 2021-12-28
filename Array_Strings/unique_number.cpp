#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	int unique= 0;

	for(int i =0; i<size; i++)
	{
		cin>>arr[i];
	}
	//cout<<" hello";
	
	for(int i =0; i<size; i++)
	{
		unique = unique^arr[i];
		
	}
	cout<<unique;
	
	return 0;
}

