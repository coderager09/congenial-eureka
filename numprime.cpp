#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter first and last number you want to find primes within"<<endl;
    cin>>n1>>n2;
    
    for(int i=n1;i<=n2;i++){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
            //    cout<<"not prime"<<endl;
                break;
            }
        }
        if(j==i){
            cout<<"prime no " << i << " between given numbers" <<endl;
        }
    }
    return 0;
}