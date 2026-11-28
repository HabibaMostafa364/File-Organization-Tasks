#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {
   
    ofstream outFile("grades.txt");
    if (outFile.fail()) {
        cout <<"error opening "<<endl;
        }
    int grade;
    cout <<"Enter 5 number: "<<endl;
    for (int i = 0; i < 5; i++) {
        cin>>grade;
        outFile<<grade<<endl;
    }
    outFile.close();

    ifstream inFile("grades.txt");
    if (inFile.fail()) {
        cout <<"error opening "<<endl;
    }
    
    cout <<endl<<"grades in file:";
    while (inFile >> grade) {
        cout<<grade<<endl;
    }
    inFile.close();

    int target;
    cout<<"enter a grade to delete: ";
    cin>>target;

    ifstream orgFile("grades.txt");
    ofstream tempFile("temp.txt");
    if (orgFile.fail() || tempFile.fail()) {
        cout<<"Error opening "<<endl;
        return 1;
    }

    bool found = false;
    while (orgFile>>grade) {
        if (grade!=target) {
            tempFile<<grade<<endl;
        } else {
            found = true;
        }
    }

    orgFile.close();
    tempFile.close();

    remove("grades.txt");
    rename("temp.txt", "grades.txt");

    if (found) {
        cout <<"Grade "<<target<<" deleted successfully."<<endl;
    } else {
        cout <<"Grade "<<target<<" not found in the file."<<endl;
    }

    return 0;
}