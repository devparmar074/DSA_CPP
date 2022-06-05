#include<iostream>
using namespace std;

int main()
{
	int nums[] = {2,0,2,1,1,0};
	//int size;
//	for(int i=0; i<=6; i++)
//	{
//		//cin>>nums[i];
//	}
	int low=0;
	int mid =0;
	int high=9;
	//cout<<"______";
	
	while(mid <= high)
	{
		switch(nums[mid])
		{
			case 0:
				swap(nums[low++], nums[mid++]);
				break;
				
			case 1:
				mid++;
				break;
				
			case 2:
				swap(nums[mid], nums[high--]);
				break;
		}
		
	}
	cout<<nums[low]<<nums[mid]<<nums[high];
	
}
