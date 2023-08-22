/*  #include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<< "enter digits \n";
    cin>>n;

    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"sum of digits \n"<<sum<< endl;
    return 0;
    
}   */

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<< "enter digits \n";
    cin>>n;

    for(   ;n>0;n=n/10)
    {
        sum=sum+(n%10);
    }
    cout<<"sum of digits \n"<<sum<< endl;
    return 0;
    
}