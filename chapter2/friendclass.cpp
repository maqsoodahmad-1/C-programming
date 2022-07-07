#include<iostream>
using namespace std;
class first
{
  int x,y;
  public:
  void set_value(int a,int b)
  {
   x = a;  y = b;
  }

  friend class second;
};

class second
{
  public:
  void display(first f)
  {
   cout<<f.x<<endl;
   cout<<f.y<<endl;
  }
};

int main()
{
  second obj;
  first obj1;
  obj1.set_value(12,13);
  obj.display(obj1);
}
