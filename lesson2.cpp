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

    double maxNumber = std::numeric_limits<double>::lowest();
    double currentNumber;

    std::cout << "Введите " << n << " чисел:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> currentNumber;
        if (currentNumber > maxNumber) {
            maxNumber = currentNumber;
        }
    }

    std::cout << "Максимальное число: " << maxNumber << std::endl;
    return 0;
}