#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream filestream("testou.txt");
  if(filestream.is_open())
  {
   filestream<<"Welcome to file handling .\n";
   filestream<<"C++ tutorial\n";
   filestream.close();
  }
 else 
 cout<<"File opening failed try creating a file \n";
 return 0;
 }
