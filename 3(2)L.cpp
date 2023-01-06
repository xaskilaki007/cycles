#include <iostream>
#include <cmath>

float x, min, max;

void data_input() {
    std::cout << "Enter step - ";
    std::cin >> x;
    std::cout << "\nEnter min - ";
    std::cin >> min;
    std::cout << "\nEnter max - ";
    std::cin >> max;
}

int main()
{
    data_input();
    if (max < min)
        std::cout << "\nmin bigger than max";
    while (min < max) {
        std::cout << "\nX-" << min << " Y-" << sqrt(2 + pow(4 * min, 2)) + 6 * min + sin(8 * min + 11);
        min = min + x;
    }
}
