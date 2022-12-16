#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number between 2 and 7:";
    cin>>n;

    while(n<=2 || n>=7)
    {
        cout<<"Enter valid number:";
        cin>>n;        
    }
    cout<<"Arigato!";
    return 0;

}