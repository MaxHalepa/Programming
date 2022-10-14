#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    float x, y;

    cout << "Введіть координату x: ";
    cin >> x;
    cout << "Введіть координату y: ";
    cin >> y;

    if(y <= 2 && y >= -1 && y <= 3 * x + 2 && y<= -3 * x + 2 )
        cout << "Належить площині" << endl;
    else
        cout << "Точка не належить фігурі" << endl;

    return 0;

}

// TEST 1
// x = -1; y = -1
// Належить
// TEST 2
// x = 0; y = -1.1
// Не належить
// TEST 3
// x = 0.5; y = 1
// Належить