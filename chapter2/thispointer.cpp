#include<iostream>
using namespace std;
class Employee
{
  int id;
  string name;
  float salary;
public:
  Employee(int id,string name,float salary)
  {
    this->id = id; 
    this->name = name;
    this->salary = salary;
  }
 public:
 void display()
 {
  cout<<"Name:-->"<<name<<"ID:-->"<<id<<"Salary:-->"<<salary<<endl;
 }
};

int main()
{
 Employee e1 (101,"Maqsood ahamd tali",55000.00);
 Employee e2 = Employee(102,"Zubair ahmad dar",56000.00);
 e1.display();
 e2.display();
}


