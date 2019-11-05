#include <iostream>

using namespace std;

int main()
{
    float liczba1, liczba2;

    cout<<"Podaj liczbe: ";
    cin>>liczba1;

    liczba2=liczba1 + 100;

    for( liczba1; liczba1 <= liczba2 ; liczba1++)
    {
        cout<<liczba1<<endl;
    }



    return 0;
}
