#include<iostream>
using namespace std;
class integer
{
int a,b;
public:
int set_value(int x,int y)
{
a = x; b = y;
return 0;
}
friend int sum(integer);
};

int sum(integer s)
{
   return int(s.a+s.b);
}

int main()
{
integer c ;
integer c1;
c.set_value(10,18);
c1.set_value(13,17);
cout<<"Sum is"<<sum(c1);
return 0;
} 

