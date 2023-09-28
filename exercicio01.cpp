#include <iostream>

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

int main()
{
    int num1 = 5;
    int num2 = 7;
    int num3 = 10;

    std::cout << "Fatorial de " << num1 << " é " << fatorial(num1) << std::endl;
    std::cout << "Fatorial de " << num2 << " é " << fatorial(num2) << std::endl;
    std::cout << "Fatorial de " << num3 << " é " << fatorial(num3) << std::endl;

    return 0;
}