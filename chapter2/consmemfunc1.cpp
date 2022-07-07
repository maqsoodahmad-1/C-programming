#include<iostream>
using namespace std;
class Demo
{

 int x;
 public:
 Demo(int num=0)
 {}
 
 void set_val(int num)
 {
  x = num;
 }
 public:
 int const get_val()
 {
  return x; 
 }
};

int main()
{
Demo d;
Demo d1;
d.set_val(10);
d1.set_val(100);
cout<<"Value using d object: "<<d.get_val()<<endl;
cout<<"Value using d1 object: "<<d1.get_val()<<endl;
}

