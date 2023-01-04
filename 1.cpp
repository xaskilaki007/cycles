#include <iostream>

float x;

void data_in() {
 std::cin >> x;
}

int main()
{
    data_in();
    for (int i = 0; i < x; i++) {
 std::cout << "" << "n/";
        for (int j = -1; j < i; j++) {
 std::cout << "0";
        }
    }
    return 0;
}
