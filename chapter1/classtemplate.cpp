#include<iostream>
using namespace std;
template <class T>
class addition
{
 public:
 T num1 = 10;
 T num2 = 20;
 T add()
 {
   cout<<"Sum of num1 and num2 is "<<num1 +num2 <<endl;
return 0;
 }
};

int main()
{
  addition <int> ad;
  ad.add();
}


