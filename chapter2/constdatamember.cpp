#include<iostream>
using namespace std;
class Number
{
 public:
 const int x;
 Number():x(40){}
 void display()
 {

  cout<<"The value of constat member is -->"<<x<<endl;
 }
};
int main()
{
Number num;
num.display();
}
