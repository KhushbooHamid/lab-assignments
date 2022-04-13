#include<iostream>
using namespace std;
int main()
{
    float dollars;
    int currency;
    cout<<"enter amount in dollars";
    cin>>dollars;
    cout<<"enter 1 to convert into pounds, 2 to franc,3 to deutschemark,4 to yen";
    cin>>currency;
    switch(currency)
    {
        case 1:
               cout<<dollars/1.487<<" pounds";
               break;
        case 2:
               cout<<dollars/0.172<<" franc";
               break;
        case 3:
               cout<<dollars/0.584<<" deutschemark";
               break;
        case 4:
                cout<<dollars/0.00955<<" yen";
                break;
        default:
                cout<<"enter valid input";
    }
}