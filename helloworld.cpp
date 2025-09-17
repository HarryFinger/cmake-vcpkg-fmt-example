#include <fmt/core.h>
#include <iostream>

int main()
{
    fmt::print("Hello World!\n");
    fmt::print("Нажмите Enter, чтобы выйти...\n");
    std::cin.get();
    return 0;
}