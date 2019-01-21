#include <iostream>

auto message()
{
    return "Hello World!";
}

int main(int argc, char** argv)
{
    std::cout << message()<< std::endl;
    return(0);
}
