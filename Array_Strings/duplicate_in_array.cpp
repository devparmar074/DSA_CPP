#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	int ans= 0;
	
	for(int i =0; i< size; i++)
	{
		cin>>arr[i];
	}
	
	if(size < 0)
	{
		cout<<"0";
	}
	else
	{
	for(int i =0; i<size; i++)
	{
		ans = ans^arr[i];
	}
	
	for(int i =0; i<size; i++)
	{
		ans = ans ^i;
		
	} 
	cout<<ans;
	}	
	return 0;
	
}
