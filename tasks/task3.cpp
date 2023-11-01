#include <iostream>

int main() {
int i;
std::cin >> i;

int k = 1;
int cnt = 0;

while (k != i) {
if (i % k == 0) {
cnt += 1;
}
k += 1;
}

if (cnt == 1) {
std::cout << "Простое число" << std::endl;
} else {
std::cout << "Составное число" << std::endl;
}

return 0;
}