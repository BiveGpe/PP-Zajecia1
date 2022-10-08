#include <iostream>

using namespace std;

int main()
{
    int number;

    // Pobranie wartości od użytkownika
    cout << "Podaj liczbe calkowita: ";
    cin >> number;

    if (number == 0) // Czy zero
    {
        cout << "zero" << endl;
    }
    else if ((number % 2) == 1) // Czy nieparzysta
    {
        cout << "Nieparzysta" << endl;
    }
    else
    {
        cout << "Parzysta" << endl;
    }

    return 0;
}