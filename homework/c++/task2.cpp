#include <iostream>

int main() {
int i;
std::cin >> i;
int k = 1;
int fct = 1;
while (k != i) {
fct += fct * k;
k += 1;
}
std::cout << fct << std::endl;
return 0;
}