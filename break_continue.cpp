// Contoh penggunaan break dan continue
#include <iostream>

int main()
{
    for (int i = 10; i >= 5; --i)
    {
        if (i == 8)
        {
            continue;
        }
        if (i == 6)
        {
            break;
        }
        std::cout << "Iterasi ke-" << i << std::endl;
    }
}