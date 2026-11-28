#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ifstream input("names.txt");
    if (input.fail()) {
        cout <<"Unable to open"<<endl;
    }

    string name;
    vector<string> names;

    while (getline(input, name)) {
        if (!name.empty()) {
            names.push_back(name);
        }
    }
    input.close();

    sort(names.begin(), names.end());

    cout <<"Names sorted in ascending order:"<<endl;
    for (int i = 0; i < names.size(); i++) {
        cout <<names[i]<<endl;
    }

    return 0;
}
