#include<iostream>
using namespace std;
class cube
{
public:
int side;
cube(int x)
{
side = x;
}
};

int main()
{
cube c(10);
cube c1(20);
cube c2(30);
cout<<c.side<<endl;
cout<<c1.side<<endl;
cout<<c2.side<<endl;
}
