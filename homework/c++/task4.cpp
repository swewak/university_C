#include <iostream>

int main() {
int i;
std::cin >> i;

if (i % 4 == 0) {
std::cout << "Високосный год" << std::endl;
} else {
std::cout << "Не високосный год" << std::endl;
}

return 0;
}