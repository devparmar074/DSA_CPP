#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    switch(num)
    {
        case 1: cout<<"first";
        break;

        case 2: cout<<"second"<<endl;
        break;

        case 3: cout<<"Third"<<endl;
        break;

        default : cout<<"invalid Input"<<endl;
    }
}