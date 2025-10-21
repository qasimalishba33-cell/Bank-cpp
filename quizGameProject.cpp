#include<iostream>

using namespace std;
int main()
{
  
char answer1,answer2,answer3,answer4;

int marks = 0;

    cout<<"Mini quiz game"<<endl;
    cout<<"1. Which of the following is a valid C++ identifier?"<<endl;
cout<<"A) 2num:"<<endl;
cout<<"B) _value"<<endl;
cout<<"C) return"<<endl;
cout<<"D) float"<<endl;
  
    cout<<"Enter your choice:"<<endl;
    cin>>answer1;
    
    if(answer1 == 'B')
    {
        marks+=1;
    }
    
    
    
    cout<<"Which operator has the highest precedence in C++?"<<endl;
cout<<"A) +"<<endl;

cout<<"B) *"<<endl;
cout<<"C) ()"<<endl;
cout<<"D) ="<<endl;

cout<<"Enter your choice:"<<endl;
cin>>answer2;

    if(answer2 == 'C')
{   
    marks+=1;
}


cout<<"4. What is the size of a bool data type in C++?"<<endl;
cout<<"A) 1 bit"<<endl;
cout<<"B) 1 byte"<<endl;
cout<<"C) 2 bytes"<<endl;
cout<<"D) 4 bytes"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>answer3;
    
    if(answer3 == 'B')
    {
        marks+=1;
    }
    // cout<<marks<<endl;
    cout<<". Which statement is used to terminate a loop immediately?"<<endl;
cout<<"A) stop"<<endl;
cout<<"B) end"<<endl;
cout<<"C) break"<<endl;
cout<<"D) exit"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>answer4;

    if(answer4 == 'D')
    {
        marks+=1;
    }
    cout<<marks<<endl;
}