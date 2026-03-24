#include <iostream>

#include "my_lib.h"
#include "config.hpp"

int main()
{
    std::cout << "Project name: " << s_ProjectName << std::endl;
    std::cout << "Project version: " << s_ProjectVersion << std::endl;

    PrintHelloWorld();

    return 0;
}