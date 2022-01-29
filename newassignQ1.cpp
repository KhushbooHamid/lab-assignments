#include<iostream>
using namespace std;
int main()
{
    int profession;
    float purchases;
    cout<<"enter total purchases"<<endl;
    cin>>purchases;
    cout<<"$"<<purchases<<endl;
    cout<<"enter your profession, enter 1 for teacher 2 for any other profession";
    cin>>profession;
    switch(profession)
    {
        case 1:
        {
            if(purchases>100)
           {
                cout<<"discounted total "<<purchases-(12/purchases)*100<<endl;
                cout<<"sales tax "<<(5/purchases)*100<<endl;
                cout<<"total $"<<purchases-(12/purchases)*100+(5/purchases)*100;
            }
        }
        case 2:
        {
            cout<<"total purchases $"<<purchases;
            cout<<"sales tax "<<(5/purchases)*100<<endl;
            cout<<"total $"<<purchases+(5/purchases)*100;
        }
        default:
            cout<<"enter valid input";
    }
}