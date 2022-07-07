#include<iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"Constructor called"<<endl;
}

~A()
{
cout<<"Destructor called"<<endl;
}
};
int main()
{
A obj1;//constructor called
int x = 1;
if(x)
{
 A obj2;//constructor called
}//Destructor called for obj2
}//Destructor called for obj1



