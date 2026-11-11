#include <stdio.h>

void DisplayImpl() 
{
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
}

struct Iteration 
{
    void (*Display)();
};

int main() 
{
    // Creating an instance of the struct (similar to 'new Iteration()')
    struct Iteration iteration = { DisplayImpl };
    
    iteration.Display();
    return 0;
}
