
#include <iostream>
#include <fstream>

using namespace std;

int main()
{   
     
     string name;
     int id;
     float grade;
     
     
     cout <<"enter your name : ";
     getline(cin,name);
     cout <<"enter your ID : ";
     cin >>id;
     
     cout <<"enter your Grade : ";
     cin >>grade;
     
     ofstream student ("file.txt");
     
     student<<name<<endl<<id<<endl<<grade;
    
     
     
     
    return 0;
}