#include<iostream>
#include"add/add.h"
int main()
{
    std::cout << "CMake demo\r\n";
    Add a;
    std::cout << "Addition: " << a.add(1,2) << "\r\n";
    return 0;
}