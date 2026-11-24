
#include <iostream>
#include <fstream>

using namespace std;

int main()
{  
   
   ofstream welcome("welcome.txt",ios::out);
   welcome<<"Hello Everybody";
  welcome.seekp(11);
  
  welcome<<"one ";
   
   
    return 0;
}