#include<iostream>
using namespace std;
int main()
{
    double a ,b;
    char operation;
    cout<<"====== SIMPLE CALCULATOR ====="<<endl;
    cout<<" Enter The First Number : ";
    cin>>a;
    cout<<"Enter The Second Number : ";
    cin>>b;
    cout<<"Select The Operation (+,-,*,/) : ";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<"Result : "<<a+b<<endl;
        break;
    case '-':
        cout<<"Result : "<<a-b<<endl;
        break;
    case '*':
        cout<<"Result : "<<a*b<<endl;
        break;
    case '/':
        if (b==0)
        {
        cout<<"Divison With Zero is Not Allowed."<<endl;
        } 
    else
    cout<<"Result : "<<a/b<<endl;
    
        break;

    default:
        cout<<"Invalid Operation.Please Enter Valid Operation."<<endl;   
    }
    return 0;
}
