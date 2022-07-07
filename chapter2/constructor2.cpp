#include<iostream>
using namespace std;
class A
{
public:
int i;
A();
};

A::A()
{
i = 10;
cout<<"The value is "<<i<<endl;
}

int main()
{
A a;
}
