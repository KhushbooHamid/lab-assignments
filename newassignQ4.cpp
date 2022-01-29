#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter cordinates";
    cin>>x>>y;
    if(x>0&&y>0)
    cout<<"("<<x<<", "<<y<<") "<<" lies in the first quadrant";
     else if(x<0&&y>0)
    cout<<"("<<x<<", "<<y<<") "<< "lies in the second quadrant";
    else if(x<0&&y<0)
    cout<<"("<<x<<", "<<y<<") "<< "lies in the third quadrant";
    else if(x>0&&y<0)
    cout<<"("<<x<<", "<<y<<") "<<" lies in the fourth quadrant";
    else if(x==0&&y>0||x==0&&y<0)
    cout<<"("<<x<<", "<<y<<") "<<" lies on Y axis";
    else if(x>0&&y==0||x<0&&y==0)
    cout<<"("<<x<<", "<<y<<") "<<" lies on X axis";
    else
    cout<<"origin";
}