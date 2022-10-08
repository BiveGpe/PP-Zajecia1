#include <iostream>

using namespace std;

int main()
{
    int number;

    // Pobranie wartości od użytkownika
    cout << "Podaj liczbe calkowita: ";
    cin >> number;

    if (number > 0) // Czy dodatnia
    {
        cout << "Podales dodatnia liczbe" << endl;
    }
    else if (number < 0) // Czy ujemna
    {
        cout << "Podales ujemna liczbe" << endl;
    }
    else
    {
        cout << "Podales zero" << endl;
    }

    return 0;
}
