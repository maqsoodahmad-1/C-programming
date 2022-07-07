#include<iostream>
using namespace std;
struct Number
{
  public:
  static const int a = 23;
};
const int Number::a;
int main()
{

 cout<<Number::a<<endl;
}
