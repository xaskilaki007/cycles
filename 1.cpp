//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
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
