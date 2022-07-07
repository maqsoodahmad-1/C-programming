#include<iostream>
using namespace std;
class Students
{
    public:
    int age;
    string name;
};

int main()
{

    Students A;
    Students B;
    A.age = 30;
    A.name = "Maqsood Ahmad Tali";
    B.age = 25;
    B.name = "Shabnam Shakeel Rather";
    cout<<"Name of A : "<<A.name<<endl;
    cout<<"Age of A :"<<A.age<<endl;
    cout<<"Name of B: "<<B.name<<endl;
    cout<<"Age of B :"<<B.age<<endl;
    return 0;
}
