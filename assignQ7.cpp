#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<20;i++)
    {
        for(j=0;j<i*2+1;j++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
}