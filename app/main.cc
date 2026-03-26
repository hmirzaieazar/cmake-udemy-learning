#include <iostream>
#include <nlohmann/json.hpp>

#include "my_lib.h"
#include "config.hpp"

int main()
{
    std::cout << "JSON EXTERNAL LIBRARY VERSION:" 
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << std::endl;

    std::cout << "Project name: " << s_ProjectName << std::endl;
    std::cout << "Project version: " << s_ProjectVersion << std::endl;

    PrintHelloWorld();

    return 0;
}