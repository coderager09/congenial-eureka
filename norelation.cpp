#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " enter any number :\n";
    cin>> n;

     if (n>10){
        cout<< " given no is greater than 10 ! "<<endl;
    }
    else if (n<10) {
        cout<< " given no is smaller than 10 ! " <<endl;
    }
    else {
        cout<< " given no is equal to 10 ! "<<endl;
    }
    return 0;
}