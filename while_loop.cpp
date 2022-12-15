#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number greater than 6:";
    cin>>n;

    while(n<=6)
    {
        cout<<"Enter number greater than 6:";
        cin>>n;        
    }
    cout<<"Arigato!";
    return 0;

}