#include<iostream>
using namespace std;
int main()
{
    int money, partner_age;
    cout<<"enter money:";
    cin>>money;

    if(money>=1000)
    {
        cout<<"enter partner age:";
        cin>>partner_age;
        if (partner_age>21)
        {
            cout<<"let's have wine";            
        }
        else
        {
            cout<<"let's have Tea"; 
        }
    }
    else
    {
        if (money>500)
        {
            cout<<"let's have whisky";
        }
         else
        {
            cout<<"let's have coffee"; 
        }

    }

    cout<<"  ,then we go home"<<endl;
    return 0; 

} 