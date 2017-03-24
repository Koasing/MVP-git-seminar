#include <iostream>

int function2(int worker)
{
    int retval;

    // something additional works
    retval = worker * worker;
    
    return retval;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello World!" << std::endl;
    return 0;
}
