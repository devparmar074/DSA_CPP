#include<iostream>
using namespace std;

int main()
{
	int sum = 6;
	int arr[] = {1,2,3,4,5,6,3};
	
	for(int i = 0; i<7; i++)
	{
		for(int j =i+1; j < 7; j++)
		{
			if(arr[i] + arr[j] == sum)
			{
					
					
					cout<<arr[i]<<" "<<arr[j]<<endl;
				//i++;
				//j++;
			}
			//i++;
			
		}
	}
	return 0;
}

