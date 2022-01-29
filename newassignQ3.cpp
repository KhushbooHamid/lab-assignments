#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the magnitude of earthquake , enter 1 if maginude is below 5,2 if greater than or equal to 5 and less than 5.5, 3 if greater than or equal to 5.5 and less than 6.5, 4 for greater than equal to 5.6 and less than 7.5 and 5 for higher magnitude";
    cin>>n;
    switch(n)
    {
        case 1:
        {
            
            cout<<"little or no damage";
            
            break;
        }
         case 2:
        {
           
            cout<<"some damage";
            break;
        }
          case 3:
        {
           
            cout<<"serious damage";
            break;
        }
          case 4:
        {
           
            cout<<"disaster";
            break;
        }
          case 5:
        {
           
            cout<<"catastrophe";
            break;
        }
    }
}