#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"Before swapping"<<endl;
    cout<<"Values of a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping"<<endl;
    cout<<"Values of a = "<<a<<" and b = "<<b<<endl;
}