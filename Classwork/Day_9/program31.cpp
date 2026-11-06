#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    string sName; 
    int iAge = 0;
    float fMarks = 0.0f;

    cout << "Enter your name: \n";
    getline(cin, sName); 
    cout << "Enter your age: \n";
    cin >> iAge; 

    cout << "Enter your marks: \n";
    cin >> fMarks;

    cout << "Welcome " << sName << "\n";
    cout << "Your age is: " << iAge << "\n";
    cout << "Your marks: " << fMarks << "\n";

    return EXIT_SUCCESS;
}
