#include<iostream>
using namespace std;
int main()
{
    char alp;
    cout<<"enter any alphabet : \n";
    cin>>alp;
    switch(alp){
            case 'a':{
            cout<<"vowel"<<endl;
            break;
        }
            case 'e':{
            cout<<"vowel"<<endl;
            break;
        }
            case 'i':{
            cout<<"vowel"<<endl;
            break;
        }
            case 'o':{
            cout<<"vowel"<<endl;
            break;
        }
            case 'u':{
            cout<<"vowel"<<endl;
            break;
        }
        default:{
            cout<<"consonant"<<endl;
        }
    }
    return 0;
}
