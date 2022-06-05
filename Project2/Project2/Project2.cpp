#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");
    
    cout << "Введите число: ";
    int x;
    cin >> x;

    while (x < 10)
    {
        cout << x << " * " << x << " = " << x * x << endl;
        x++;
    }
    
    
    return 0;
}
