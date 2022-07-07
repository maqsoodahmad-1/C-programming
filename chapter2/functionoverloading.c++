#include<iostream>
using namespace std;
class overloading
{
  public:
  int demofunction(int i)
  {
   return i;
  }
  
  double demofunction(double d)
  { 
   return d;
  }
};

int main()
{
 overloading obj;
 cout<<"Value of integer "<<obj.demofunction(12)<<endl;
 cout<<"Value of double "<<obj.demofunction(12.123);
}

