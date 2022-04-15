#include <iostream>
int main()
{
    int a, b;
    std::cout << "enter a and b" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << "Sum = " << a + b << std::endl;
    std::cout << "Difference = " << a - b << std::endl;
    std::cout << "Product = " << a * b << std::endl;
    std::cout << "Quotient = " << a / b << std::endl;
    std::cout << "Reaminder = " << a % b << std::endl;
    return 0;
}