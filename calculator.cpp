#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers for calculation:"<<endl;
    cin>>a>>b;
    char operation;
    cout<<"you have operation + , - , * , / : \n";
    cout<<"enter operation :"<<endl;
    cin>>operation;
    switch(operation){
        case '+':{
            cout<<"addition  "<<a+b<<endl;
            break;
        }
        case '-':{
            cout<<"substraction  "<<a-b<<endl;
            break;
        }
        case '*':{
            cout<<"multiplication "<<a*b<<endl;
            break;
        }
        case '/':{
            cout<<"division  "<<a/b<<endl;
            break;
        }
        default:{
            cout<<"enter operator  "<<endl;
            break;
        }
    }
    return 0;
}