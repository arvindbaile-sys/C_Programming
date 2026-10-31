#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main()
{
    int no = 0;

    cout << "Enter the number \n" ;
    if(!(cin >> no))
    {
        cerr << "Invalid input\n";

        return EXIT_FAILURE;
    }

    cout << "Input is vaild\n";

    return EXIT_SUCCESS;
}