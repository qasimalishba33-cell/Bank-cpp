#include<iostream>
using namespace std;
int main(){
    for(int i = 1;i<=6;i++){
        for(int space = i;space<6;space++){
            cout<<" ";
        }
        
        
        for(int stars = 1; stars<=(2*i-1); stars++){
            cout<<"*";
        }
            
        
        cout<<endl;
        }
    }
