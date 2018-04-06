#include<iostream>
#include<string>
#include"thing.h"
using namespace std;
int main()
{
  thing T(1,2,3);
    cout<<"T"<<endl;
    T.display();
    thing A=T;
    cout<<"A"<<endl;
    A.display();
    thing B;
    cout<<"B"<<endl;
    B.display();
    B=T;
    cout<<"B"<<endl;
    B.display();
    T.set(4,5,6);
  
    cout<<"SETTING T"<<endl;
     cout<<"T"<<endl;
     T.display();
     cout<<"B"<<endl;
    B.display();
      cout<<"A"<<endl;
    A.display();
  getchar();
}