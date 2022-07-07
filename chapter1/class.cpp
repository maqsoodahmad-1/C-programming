#include<iostream>
using namespace std;
class Box
{
    public :
    int length;
    int height;
    
};
int main()
{
    Box obj;
    obj.length = 20;
    obj.height = 30;
    cout<<"Length = "<<obj.length<<endl;
    cout<<"Height = "<<obj.height<<endl;
    return 0;
}

