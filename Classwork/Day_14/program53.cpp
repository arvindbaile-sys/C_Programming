#include <iostream>
using namespace std;

class Iteration {
public:
    static void Display() {
        cout << "Jay Ganesh..." << endl;
        cout << "Jay Ganesh..." << endl;
        cout << "Jay Ganesh..." << endl;
        cout << "Jay Ganesh..." << endl;
    }
};

int main() {
    Iteration::Display();
    return 0;
}
