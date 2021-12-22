#include <iostream>
#include <Array.hpp>

#define SIZE 10


int main(int, char**)
{
    // Construction with no parameter: creates an empty array.
    Array<std::string> a1;
    std::cout << "a1.size() = " << a1.size() << std::endl;
    std::cout << "a1.ptr() = " << a1.ptr() << std::endl;

    // Construction with a parameter: creates an array with the given size.
    Array<int> a2(SIZE);
    std::cout << "a2.size() = " << a2.size() << std::endl;
    std::cout << "a2.ptr() = " << a2.ptr() << std::endl;
    std::cout << "Initial values:" << std::endl;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        std::cout << "a2[" << i << "] = " << a2[i] << std::endl;
    }

    std::cout << "Assigninng values..." << std::endl;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        a2[i] = i;
    }
    std::cout << "New values:" << std::endl;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        std::cout << "a2[" << i << "] = " << a2[i] << std::endl;
    }

    Array<int> a3(a2);
    std::cout << "a3.size() = " << a3.size() << std::endl;
    std::cout << "a3.ptr() = " << a3.ptr() << std::endl;
    std::cout << "Initial values:" << std::endl;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        std::cout << "a3[" << i << "] = " << a3[i] << std::endl;
    }

    try
    {
        a2[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Trying to access an invalid index" << std::endl;
    }

    try
    {
        a2[SIZE] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Trying to access an invalid index" << std::endl;
    }
    return 0;
}
