#include <iostream>

int function2(int worker)
{
    int retval;

    // something additional works
    retval = worker * worker;

    // hard_worker
    int hard_worker = worker * 2;
    
    hard_worker += 3;

    retval = retval + hard_worker;
    
    return retval;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello World!" << std::endl;
    return 0;
}
