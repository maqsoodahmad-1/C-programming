#include<iostream>
using namespace std;
class Number
{
int a ,b;
public:
Number()
{
a=0;b=0;
}
public:
void set_a(int num1)
{
  a = num1;
}

void set_b(int num2)
{
 b = num2;
}

int const get_a()
{ 
  return a;
}

int get_b() const
{
 return b;
}
};
int main()
{
Number num;
num.set_a(10);
num.set_b(50);
//printing values of the variables
cout<<"The value of a is "<<num.get_a()<<endl;
cout<<"The value of b is "<<num.get_b()<<endl;
}
