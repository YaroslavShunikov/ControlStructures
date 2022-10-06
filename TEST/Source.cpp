#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdlib>

int main()
{
    std::cout << "  ";
    for (int j = 0; j < 16; ++j) std::cout << std::hex << j << ' ';
    std::cout << std::endl;
    for (int i = 0; i < 16; ++i)
    {
        std::cout << std::hex << i << ' ';
        for (int j = 0; j < 16; ++j)
        {
            int n = (i << 4) + j;
            if (isgraph(n)) std::cout << static_cast<char>(n) << ' ';
            else std::cout << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    system("pause");
}