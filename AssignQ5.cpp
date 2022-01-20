#include<iostream>
using namespace std;
int main()
{
    int hours_worked,overtime_pay,hourly_wage;
    cout<<"enter number of hours worked";
    cin>>hours_worked;
    if(hours_worked>40)
    {
        cout<<"pay is "<<(hourly_wage-40)*overtime_pay+hourly_wage*40;
    }
}