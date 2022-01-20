#include<iostream>
using namespace std;
int main()
{
    int g,c,i,f=1;
    cout<<"enter the number of guests";
    cin>>g;
    cout<<"enter the number of chairs";
    cin>>c;
    cout<<"the possible number of combinations";
    for(i=g;i>(g-c);i--)
    {
        f=f*i;
    }
    cout<<f;
    
}