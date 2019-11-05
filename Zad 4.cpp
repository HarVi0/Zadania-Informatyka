#include <iostream>

using namespace std;

int main()
{

    float a, b ,wynik;

    cout << "Podaj a: ";
    cin>> a;

    cout << "Podaj b: ";
    cin>> b;

    if(a==0)
        {
            if(b==0)
                {
                    cout<<"Rownanie tozsamosciowe. Nieskonczenie wiele rozwiazan.";
                }
            else
                {
                    cout<<"Rownanie sprzeczne. Brak rozwiazan.";
                }
        }
     else
        {
             wynik = -b/a;
             cout<<"Wynik: "<<wynik;
        }




    return 0;
}
