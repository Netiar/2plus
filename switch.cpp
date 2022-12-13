#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch) 
    {
        //default can be at start, end or anywhere in between
        default:
        cout<<"Enter valid choice.";
        break;

    case 'a':
        cout<<"I wanna know my damn balance.";
        break;

    case 'b':
        cout<<"I wanna register a complaint.";
        break;

    case 'c':
        cout<<"I wanna talk to customer care.";
        break; 

    case 'd':
        cout<<"I wanna talk to the cute attendant.";
        break; 

    case 'e':
        cout<<"I wanna talk to the manager.";
        break;            

    }

    cout<<"\n out of switch case.";
    return 0;
}