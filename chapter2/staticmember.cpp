#include<iostream>
using namespace std;
class Static
{
 public:
 static int x ;
};

int Static :: x = 12; //definition of static memeber outside the class 
int main()
{
 cout<<Static::x<<endl;
}
