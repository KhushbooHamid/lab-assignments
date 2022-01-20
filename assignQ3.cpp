#include<iostream>
using namespace std;
int main()
{
    int arr[11]={92,90,93,87,80,78,79,72,68,61,59};
    int i,count=1,count1=0,count2=0;
    for(i=0;i<11;i++)
    {
        if(arr[i]>=85)
        {
            cout<<count<<" is a hot day"<<endl;
            count++;
        }
        else if(arr[i]>=60 && arr[i]<=84)
        {
            cout<<count<<" is a pleasant day"<<endl;
            count++;
        }
        else if(arr[i]<60)
        {
             cout<<count<<" is a cold day";
            count++;
        }
    }
    cout<<endl;
    int avg,sum=0;
    for(i=0;i<11;i++)
    {
      sum = sum+arr[i];
    }
    avg=sum/11;
    cout<<"the average temperature is "<<avg;
  

    
    
    
   
}