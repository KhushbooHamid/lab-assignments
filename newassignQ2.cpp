#include<iostream>
using namespace std;
int main()
{
    int weight;
    cout<<"Enter your weight";
    cin>>weight;
    if(weight<18.5)
    cout<<"underweight";
    else if(weight>=18.5&&weight<=24.9)
    cout<<"normal";
    else if(weight>=25&&weight<=29.9)
    cout<<"overweight";
    else 
    cout<<"obese";

}