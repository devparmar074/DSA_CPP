#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}
	
	int ans = fact(n+1) + fact(n+2);
	
	return ans;
}

int main()
{
	int digit;
	cin>>digit;
	fact(digit);
	
	return 0;
	
}
