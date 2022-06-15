#include<iostream>
using namespace std;

//factorial Logic and Recursion
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	
	return n * factorial(n-1);
}
// Logic of Counting in Recursion.
int count(int n)
{
	if(n == 0)
	{
		return 0;
	}
	
	cout<<n<<endl; 
	return count(n-1);
}

// Leetcode 50.Pow(x,n) : 
	
	int power(int x,int n)
	{
		if(n == 0)
		{
			return 1;
		}
		else
		{
			int ans = x * n;
			cout<< ans;
			
			return power(x ,n);
			
			//int ans = x * power(n-1);
			//int ans = x * n;
		
			//cout<< ans;
	}
		//	return ans;
	}
	
	

int main()
{
	int x,n;
	cin>>x>>n;
	cout<<endl;
	//cout << count(x)<<endl;
	cout << power(x,n);
	
}

