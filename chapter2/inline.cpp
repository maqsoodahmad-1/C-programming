#include<iostream>
using namespace std;
inline int add(int a ,int b)
{
return a+b;
}

int main()
{
int x,y;
cout<<"Enter the two numbers you want to add "<<endl;
cin>>x>>y;
cout<<"The sum of entered numbers is "<<add(x,y)<<endl;
}
