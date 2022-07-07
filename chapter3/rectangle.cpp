#include<iostream>
using namespace std;
class shape
{
  protected:
  int height,width;
  public:
  void set_width(int w)
  {
    width = w;
  }
  
void set_height(int h)
{
   height = h;
}
};

class Rectangle :public shape
{
 public:
 int getArea()
 {
   return(width * height);
 }
};

int main()
{
 Rectangle Rect;
 Rect.set_width(10);
 Rect.set_height(20);
 cout<<"Total area:"<<Rect.getArea()<<endl;
}
 
