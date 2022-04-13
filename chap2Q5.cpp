#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char a;
    int q;
    cout<<"enter a letter";
    cin>>a;
    q = islower(a);
    cout<<q;
}