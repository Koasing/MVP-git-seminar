#include <iostream>

int function1()
{
    int very_important_value;

    // blahblah something important algorithm
    very_important_value = 128;

    very_important_value *= 2;
    
    very_important_value = very_important_value >> 1;

    return very_important_value;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello World!" << std::endl;
    return 0;
}
