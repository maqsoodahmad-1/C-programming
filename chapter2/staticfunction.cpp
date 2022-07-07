#include<iostream>
using namespace std;
class Demo
{

  static int x ;
  public:
  static int display() 
  {
   cout<<"The value of static member is "<<x<<endl; 
   return 0;
  }
};

int Demo :: x =25;
int main()
{
 Demo :: display();
 Demo d;
 d.display();
}
