#include<iostream>
using namespace std;
class copycon
{
public:
int a,b;
copycon(int x,int y)
{
 a = x; 
 b = y;
 cout<<"/nHere is the initialisation of the constructor"<<endl;
}

void display()
{
cout<<"/n Values:\t"<<a<<"\t"<<b<<endl;
}
};

int main()
{
copycon object(10,20);
copycon object2 = object;
object2.display();
}
