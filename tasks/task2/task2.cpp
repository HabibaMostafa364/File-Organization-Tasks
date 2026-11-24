
#include <iostream>
#include <fstream>


using namespace std;

int main()
{   
    string x,z,y;
    ifstream fruit ("fruit.txt" ,ios::in);
    fruit >>x>>y>>z;
    fruit.close() ;
    
    ofstream out_fruit ("fruit.txt",ios::out | ios::app);
    out_fruit<<"\nFresh Fruits";
     fruit.close() ;
    return 0;
}