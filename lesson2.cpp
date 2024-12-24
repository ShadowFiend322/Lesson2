#include <iostream>
#include <limits>

int main() {
    int n;
    std::cout << "Введите количество чисел:" << std::endl;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Количество чисел должно быть больше нуля." << std::endl;
        return 1;
    }

    double minNumber = std::numeric_limits<double>::max();
    double currentNumber;

    std::cout << "Введите " << n << " чисел:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> currentNumber;
        if (currentNumber < minNumber) {
            minNumber = currentNumber;
        }
    }

    std::cout << "Минимальное число: " << minNumber << std::endl;
    return 0;
}