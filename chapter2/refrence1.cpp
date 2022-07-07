#include<iostream>
using namespace std;
int main()
{
  
  int i;
  double d;
  int &r = i;
  double &y = d;
  cout<<"Enter the value of i and r"<<endl;
  cin>>i>>d;
  cout<<"You have entered the following values"<<"i="<<r<<"\nd="<<y<<endl;
}
