#include<iostream>
using namespace std;
int main()
{

int num;
int *arr;
cout<<"Enter the size of array:"<<endl;
cin>>num;
arr= new int[num];
cout<<"Enter the marks of student"<<endl;
for(int i =1;i<=num;i++)
{
 cin>>arr[i];
}
cout<<"Dispalying the marks of students"<<endl;
for(int i = 1;i<=num;i++)
{
cout<<arr[i]<<endl;
}
delete [] arr;
}

