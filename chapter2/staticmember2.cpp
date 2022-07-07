#include<iostream>
using namespace std;
class Demo
{
  public:
  static int A;
};

int Demo :: A =50;

int main()
{
  cout<<"The value of a is"<<Demo::A<<endl;
}

