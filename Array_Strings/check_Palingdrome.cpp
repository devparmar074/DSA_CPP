#include<iostream>
using namespace std;
int num,reverse=0,rem,ans=0;

int main()
{
	cin>>num;
	int n = num;
	while(n>0)
	{
		rem = n % 10;
		reverse = reverse * 10 +rem;
		n/= 10;
		//ans = reverse;	
		//cout<<ans;
	}
	
	if(num == reverse)
     {
     	cout<<"true";
	 }
	 else{
	 	cout<<"false";
	 }
    return 0;
}
