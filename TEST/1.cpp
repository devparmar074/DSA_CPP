#include<iostream>
using namespace std;
int main()
{
    int num1,num2,op;
    cout<<"1. sum"<<endl;
    cout<<"2. subtract"<<endl;
    
    cout<<"Which Opearation you perform...";
    cin>>op;
    cin>>num1>>num2;
    
    
    	switch(op)
    {
        case 1: cout<<num1+num2;
        break;

        case 2: cout<<num1-num2<<endl;
        break;

//        case 3: cout<<"Third"<<endl;
//        break;

        default : cout<<"invalid Input"<<endl;
    }
    return 0;
}
