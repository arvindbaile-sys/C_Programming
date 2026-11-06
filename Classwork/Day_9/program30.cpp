#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    cout << "Enter your name : \n";
    cin.getline(sName, 30);

    cout << "Enter your age : \n";
    cin >> iAge;

    cout << "Enter your marks : \n";
    cin >> fMarks;

    cout << "Welcome " << sName << "\n";
    cout << "Your age is : " << iAge << "\n";
    cout << "Your marks : " << fMarks << "\n";

    return EXIT_SUCCESS;
}
