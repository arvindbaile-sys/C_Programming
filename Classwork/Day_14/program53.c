#include <stdio.h>

// Function that performs the printing
void DisplayFunc() 
{
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
}

// Struct acting like the 'Iteration' class
struct IterationType 
{
    void (*Display)();
};

int main() 
{
    // Create the 'Iteration' instance and link the function
    struct IterationType Iteration = { DisplayFunc };
    
    // Call it just like Java
    Iteration.Display();
    
    return 0;
}
