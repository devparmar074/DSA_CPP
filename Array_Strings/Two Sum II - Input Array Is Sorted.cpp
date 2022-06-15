#include<iostream>
using namespace std;

int sum(int arr[] , int target)
{
	int tar = target;
	//cin>>target;
	for(int i = 0; i<=3; i++)
	{
		for(int j=i+1; j<=3; j++)
		{
			if(arr[i] + arr[j] == target)
			{
				cout<<i<<" "<<j;
			}
		}
		
	}
}

int main()
{
	int arr[] = {2,7,11,15};
	int target = 26;
	//cin>>target;
	for(int i = 0; i<=3; i++)
	{
		for(int j=i+1; j<=3; j++)
		{
			if(arr[i] + arr[j] == target)
			{
				cout<<i<<" "<<j;
			}
		}
		
	}
	cout<<"NOT";
	
	
	
	
	//sum(arr[], target);
	return 0;
}
