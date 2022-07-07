#include<iostream>
using namespace std;
class Acct
{
public:
long int salary ;
void set_salary()
{
  salary = 5000;
}
};
class Program:public Acct
{
 public:
 int bonous;
 void set_bonous()
 {
   bonous = 200;
 }
};

int main()
{
 Program p;
 cout<<"Salary is :"<<p.salary<<endl;
 cout<<"Bonous is :"<<p.bonous<<endl;
}
