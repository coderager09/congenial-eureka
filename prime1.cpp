#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number you want to find whether prime or not \n";
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"number is not prime"<<endl;
            break;
        }     
    }
        if(i==n){ 
            cout<<"number is prime "<<endl;
    } 
   
    return 0;
}
