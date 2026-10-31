#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int no = 0;

    cout << "Enter the number :";
    if(!(cin >> no))
    {
        cout << "Invalid input \n";

        return EXIT_FAILURE;
    }
    cout << "Input is valid \n";

    return EXIT_SUCCESS;
}