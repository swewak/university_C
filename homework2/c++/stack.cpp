#include <iostream>
#include <queue>

int main() {
    std::queue<int> queue;

    queue.push(1);
    std::cout << "Содержимое очереди: ";
    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    std::cout << std::endl;

    queue.push(2);
    queue.push(3);
    queue.push(4);
    std::cout << "Содержимое очереди: ";
    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    std::cout << std::endl;

    queue.push(5);
    queue.push(6);
    std::cout << "Извлеченный элемент: " << queue.front() << std::endl;
    queue.pop();
    std::cout << "Извлеченный элемент: " << queue.front() << std::endl;
    queue.pop();

    return 0;
}