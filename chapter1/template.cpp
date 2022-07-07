#include<iostream>
using namespace std;
//template 

template<class T> T add(T &a,T &b)
{
  T result = a + b;
  return result;
}

int main()
{
  
 int i =12 ;
 int j =15 ;
 float m = 13.6 ;
 float n = 16.4 ;
 cout<<"Addition of i and j is  :"<<add(i,j)<<endl;
 cout<<"Addition of m and n is :"<<add(m,n)<<endl;
}
