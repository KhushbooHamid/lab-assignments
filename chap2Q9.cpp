#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"Enter first and second fraction ";
    cin>>a>>b>>c>>d;
    cout<<"the first fraction is "<<a<<"/"<<b<<endl<<"the second fraction is "<<c<<"/"<<d<<endl;
    cout<<"the sum is "<<(a*d+c*b)<<"/"<<b*d;
}