#include<iostream>
using namespace std;
class thing
{
public:
thing() //Null 
{
this->x=new int(0);
this->y=0;
this->z=0;
}
thing(int X,int y,int z )    //para
{
x = new int(X);
*x=X;
this->y=y;
this->z=z;
}
thing(thing& cloneT)               //copy
{
this->x = cloneT.x;
cloneT.x=new int;
this->y=cloneT.y;
this->z=cloneT.z;
}
void setX(int X)                      //setters
{
this->x =new int(X);
}

void sety(int)                      //setters
{
this->y =y;
}


void setz(int)                      //setters
{
this-> z=z;
}

void set(int X,int y,int z)           //for t settings
{
this->x =new int(X);
this->y=y;
this->z=z;
}
void operator =(thing& T)             //asssignment operator overload
{
this->x=new int(0);
x = T.x;
this->y=T.y;
this->z=T.z;
}

void display()
{
int i=*x;
cout<<"X: " << i<< endl << "Y: "<<this->y<<endl<<"Z: "<<this->z<<endl;
}

private:
int *x;
int y,z;
};               