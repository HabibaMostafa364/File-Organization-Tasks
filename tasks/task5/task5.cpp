#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out_file("students.txt",ios::app);
    char letter='y';

    while (choice=='y' ||choice=='Y') {
        char name[20];
        int id;
        float grade;
        char delim='$';

        cout <<"Enter student name: ";
        cin.ignore();
        cin.getline(name, 20);
        cout <<"Enter ID: ";
        cin >> id;
        cout <<"Enter grade: ";
        cin >> grade;

        outFile << name << ", " << id << ", " << grade << " " << delim << endl;

        cout <<"Add another student? (y/n): ";
        cin >> letter;
    }

    out_file.close();
    return 0;
}