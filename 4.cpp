#include <iostream>
#include <cmath>
int main()
{
    int H,M,III;
    std :: cout << "H = ";
    std :: cin >> H;
    std :: cout << "M = ";
    std :: cin >> M;
    std :: cout << "III = ";
    std :: cin >> III;

    for(; H < M ; H += III)
    {
        std :: cout << H << " ";
    }
    std :: cout << M << " ";
    return 0;
}
