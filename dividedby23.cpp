#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0 && n%3==0)
    {
        cout<<"divided by both numbers \n";
    }
    else if(n%2==0)
    {
        cout<<"divided by only 2 \n";
    }
    else if(n%3==0)
    {
        cout<<"divided by only 3 \n";
    }
    else
    {
         cout<<"divided by none \n";
    }
    return 0;
}