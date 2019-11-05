#include <iostream>

using namespace std;

int main()
{
    float liczba1, liczba2, liczba3;


    cout << "Podaj liczbe nr.1: ";
    cin>> liczba1;

    cout << "Podaj liczbe nr.2: ";
    cin>> liczba2;

    cout << "Podaj liczbe nr.3: ";
    cin>> liczba3;

    if(liczba1<liczba2 && liczba1<liczba3)
    {
        cout<<"Liczba nr.1 jest najemniejsza";
    }
    else if(liczba2<liczba1 && liczba2<liczba3)
    {
        cout<<"Liczba nr.2 jest najmniejsza";
    }
    else if(liczba3<liczba1 && liczba3<liczba2)
    {
        cout<<"Liczba nr.3 jest najmniejsza";
    }

    return 0;
}
