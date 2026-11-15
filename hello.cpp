
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int semester;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your semester: ";
    cin >> semester;

    cout << "\n--- Student Profile ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Semester: " << semester << endl;

    return 0;
}
