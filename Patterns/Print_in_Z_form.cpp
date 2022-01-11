#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i =0; i <n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	//for first row 
	for(int i=0; i < n; i++)
	{
		cout<<a[0][i]<<" ";
	}
	//for second row
	for(int i =1, j=n-2; i<n-1;i++,j--)
	{
		cout<<a[i][j]<<" ";
	}
	//for Third row
	for(int i=0; i<n; i++)
	{
		cout<<a[n-1][i]<<" ";
	}
	
	
	
	return 0;
}


