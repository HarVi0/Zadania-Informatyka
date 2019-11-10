#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int change;

    cout<<"1. POZIOM"<<endl;
    cout<<"2. PION"<<endl;
    cout<<"Wybierz jak maja zostac wyswietlone liczby: ";
    cin>>change;
    cout<<endl;



    switch(change)
    {
    case 1:
        for( int i=1 ; i<=100; i++)
        cout << " " << i;
    break;

    case 2:
        for( int i=1 ; i<=100; i++)
        cout << i << endl;
    break;

    default:
        cout<<"Nie ma takiej opcji!";
    break;
    }
    return 0;
}
