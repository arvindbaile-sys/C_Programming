#include <iostream>
#include <string> 
#include <limits> 

using namespace std;

int main() {
    string sName;     
    int iAge = 0;
    float fMarks = 0.0f;

    cout << "Enter your name : " << endl;
    
    getline(cin, sName); 

    cout << "Enter your age : " << endl;
    cin >> iAge;

    cout << "Enter your marks : " << endl;
    cin >> fMarks;

    cout << "Welcome " << sName << endl;
    cout << "Your age is : " << iAge << endl;
    cout << "Your marks : " << fMarks << endl;

    return 0;
}
