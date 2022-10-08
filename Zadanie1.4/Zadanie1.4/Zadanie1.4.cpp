#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2, liczba3;

    // Pobranie wartosci od użytkownika
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    cout << "Podaj trzecia liczbe: ";
    cin >> liczba3;


    if (liczba1 > liczba2 && liczba1 > liczba3) // Czy liczba1 jest najwieksza
    {
        cout << liczba1 << " Jest najwieszka liczba" << endl;
    }
    else if (liczba2 > liczba1 && liczba2 > liczba3) // Czy liczba2 jest najwieksza
    {
        cout << liczba2 << " Jest najwieszka liczba" << endl;;
    }
    if (liczba3 > liczba1 && liczba3 > liczba2) // Czy liczba3 jest najwieksza 
    {
        cout << liczba3 << " Jest najwieszka liczba" << endl;;
    }

    return 0;
}