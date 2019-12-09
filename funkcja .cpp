#include <iostream>
#include <stdio.h>
#include <cstdlib>



using namespace std;

float kolo(float r)
{
    return r*(3.14)*2;
}

float trojkat(float a, float h)
{
    return (a*h)/2;
}

float prostokat(float a, float b)
{
    return a*b;
}

float kwadrat(float a)
{
    return a*a;
}


int main()
{
 bool i=true;

    while(i=true)
    {

    cout << "==============" << endl;
    cout << "1. KOLO" << endl;
    cout << "2. TROJKAT" << endl;
    cout << "3. PROSTOKAT" << endl;
    cout << "4. KWADRAT" << endl;
    cout << "==============" << endl;
    cout << endl;


    int change;


    cout << "Wybierz figure ktorej pole chcesz obliczyc: ";
    cin>> change;

    switch(change)
    {
        case 1:

            float promien, pole;

            cout<<"Podaj promien kola: ";
            cin>>promien;

            cout<<kolo(promien);
               cout<<endl;
               cout<<endl;

            i=true;

        break;

        case 2:
            float a, h ;

            cout<<"Podaj podstawe trojkata: ";
            cin>>a;

            cout<<"Podaj wysokosc trojkata: ";
            cin>>h;

            cout<<"Pole: "<<trojkat(a,h);
               cout<<endl;
               cout<<endl;

               i=true;


        break;

        case 3:
          float bok1, bok2;

          cout<<"Podaj 1 bok: ";
          cin>>bok1;

          cout<<"Podaj 2 bok: ";
          cin>>bok2;

          cout<<"Pole: "<<prostokat(bok1,bok2);
          cout<<endl;
          cout<<endl;

           i=true;

        break;

        case 4:
            float bok_kwadratu;

            cout<<"Podaj bok kwadratu: ";
            cin>>a;

            cout<<"Pole: "<<kwadrat(a);
            cout<<endl;
            cout<<endl;

               i=true;
        break;

        default:
            cout<<"Nie ma takiej opcji w menu !!! :) ";
            cout<<endl;

               i=true;
        break;

    }
    cout<<"Nacisnij ENTER, zeby policzyc ponownie";

    getchar();
    getchar();

    system("cls");

    }
    return 0;
}
