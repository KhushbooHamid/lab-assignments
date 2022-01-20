#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main()
{
    int n,i,smallest=INT_MAX,largest=INT_MIN,standard_deviation;
    int a[100];
    float avg,sum=0,sum_squares=0;
    for( i=0;i<n;i++)
    sum_squares+=a[i]*a[i]; 
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements of array";
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i=0;i<n;i++)
    {
        cout<<a[i];
    }
    for(i=0;i<n;i++)
    largest=max(largest,a[i]);
    cout<<endl;
    cout<<largest<<" is largest";
    for(i=0;i<n;i++)
    smallest=min(smallest, a[i] );
    cout<<endl;
    cout<<smallest<<" is smallest";
  for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg=sum/n;
    cout<<"the average value is "<<avg;
    standard_deviation = sqrt((sum_squares/n) - (avg * avg));
    cout<<"standard deviation:"<< standard_deviation;
}