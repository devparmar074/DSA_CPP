#include<iostream>
using namespace std;
int main()
{
	// For Static Array
//	int arr[] = {4,9,3,5,6,8,1};
	// for Dynamic Array
	
	int size;
	int arr[size];
	cin>>size;
	
	
	 for(int i=0; i<size; i++)
	 {
	 	cin>>arr[i];
	 	//cout<<endl;
	 }
	 
	 	// Minimum Element
		 int min = arr[0];
	
		for(int i=0; i<size; i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];
				
			}
		}
		cout<<"Min : "<<min<<endl;
		
	//For Maximum Element
		int max = arr[0];
		for(int j= 0; j<size; j++)
		{
			if(arr[j] > max)
			{
				max = arr[j];
			}
		}
		cout<<"Max : "<<max<<endl;
		
		
	return 0;
}
