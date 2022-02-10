#include <iostream>

int main()
{

    std::string a;
    std::cin >> a;

    std::string b;
    std::cin >> b;

    char temp;

    std::cout << a.length() << " " << b.length() << std::endl;
    std::cout << a + b << std::endl;

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    std::cout << a << " " << b << std::endl;
    return 0;
}