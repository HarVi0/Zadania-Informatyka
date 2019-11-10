#include <iostream>

using namespace std;

int main()
{

    int liczba1, dzielnik;

    cout << "Podaj dowolna liczbe calkowita: ";
    cin >>liczba1;

    cout<<"Podaj liczbe przez ktora chcesz podzielic wczesniej wybrana liczbe(calkowita): ";
    cin>>dzielnik;

    if (dzielnik== 0 )
        {
            cout<<"Nie dziel przez zero!";

            return 0;
        }

    if (liczba1%dzielnik== 0 )
        {
            cout<<"Twoja liczba jest podzielna przez "<<dzielnik;
        }
    else
        {
            cout<<"Twoja liczba nie jest podzielna przez "<<dzielnik;
        }

    if(liczba1 % 2 == 0)
    {
        cout<<" oraz jest parzysta";
    }
    else
    {
        cout<<" oraz jest nieparzysta";
    }


    return 0;
}
