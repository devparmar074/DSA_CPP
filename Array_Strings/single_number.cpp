#include<iostream>
using namespace std;
int main()
{
	int ans;
	int arr[] = {2,1,1};
	for(int i =0; i<4; i++)
	{
		ans = ans ^ arr[i];
	}
	cout<<ans;
	
return 0;
}
