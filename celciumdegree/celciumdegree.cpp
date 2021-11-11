#include <iostream>

using namespace std;

double convert(double);

int main()

{
    double cel, fahr;
    cout << "Введите значение Цельсия: ";
    cin >> cel;

    fahr = convert(cel);
    cout << cel << "° Цельсия " << fahr << "° по Фаренгейту" << endl;
}

double convert(double cel)
{
    return 1.8 * cel + 32;
}