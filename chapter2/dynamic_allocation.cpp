#include<iostream>
using namespace std;
int main()
{
  int *p;
  p = new int ;
  cout<<"Enter the value of the number"<<endl;
  cin>>*p;
  cout<<"The value entered is "<<*p<<endl;
  delete p;
}
