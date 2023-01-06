#include <iostream>

float X, Y, Z;

void data_input() {
    std::cout << "Enter step - ";
    std::cin >> X;
    std::cout << "Enter min - ";
    std::cin >> Y;
    std::cout << "Enter max - ";
    std::cin >> Z;
}
int main() {
    data_input();
    for (X; X <= Y; X = X + Z) {
        std::cout << X << " ";
    }
}
