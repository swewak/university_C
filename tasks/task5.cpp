#include <iostream>

int main() {
std::string i;
std::cin >> i;

std::string s = "";
for (int j = i.length() - 1; j >= 0; j--) {
s += i[j];
}

std::cout << s << std::endl;

return 0;
}