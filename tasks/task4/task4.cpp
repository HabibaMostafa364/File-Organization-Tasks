
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct employee{
    string name;
    int age;
};



int main()
{  
    ofstream employee_data("employee.txt",ios::out);
    int size ;
    cout <<"How many person you want to add : ";
    cin>>size;
     
    vector<employee> staff (size);
    for (int i=0 ;i<size;i++){
       cin>>staff[i].name;
       cin>>staff[i].age;
       
       string status;
        if (staff[i].age >= 30) {
            status="older";
        } else {
            status="younger";
        }
       employee_data << staff[i].name << " " << staff[i].age << " " << status << endl;
       
    }
    
    employee_data.close();
    
   

   
   
    return 0;
}