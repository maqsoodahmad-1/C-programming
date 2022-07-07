#include<iostream>
using namespace std;
class Vehicle
{
 public:
 Vehicle()
 {

  cout<<"This is a vehicle and is a base class 1"<<endl;
 }
};
class FourWheeler
{
 public:
 FourWheeler()
 {
   cout<<"This is a four wheeler and this is also a base class"<<endl;
 }
};

class car :public Vehicle,public FourWheeler
{
 public:
 car()
 {
  cout<<"This is a derived class and is derived fro two base classes "<<endl;
}
};
int main()
{
 car c;
}

