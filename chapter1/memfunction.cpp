#include<iostream>
using namespace std;
class Shape
{
    public:
     int length;
     int breadth;
     void set(int a, int b)
     {
	 length = a;
	 breadth = b;
	 
      }
     
     void print();
};
    void Shape::print()
    {
	 cout<<"Area of shape is "<<length*breadth<<endl;
    }
int main()
{
    Shape obj;
    obj.set(5,6);
    obj.print();
return 0;
}
