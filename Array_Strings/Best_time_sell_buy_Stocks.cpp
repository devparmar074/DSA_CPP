#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int prices[size];
	
		for(int i =0; i<size; i++)
		{
			cin>>prices[i];
		}
	
	int maxprofit = 0;
        int minPrice = prices[0];
        for (int i = 0; i < size; i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else if (prices[i] - minPrice > maxprofit) {
                maxprofit = prices[i] - minPrice;
            }
        }
        cout<<maxprofit;
	
	return 0;
}
