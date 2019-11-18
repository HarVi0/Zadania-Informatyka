#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


float euro (float x)
{
  return x/4.29;
}

float dolar (float d)
{
   return d/3.88;
}

 float zl;

int main()
{
    int waluta;
    float  kurs_d, kurs_e;
    bool i = true;
    string data;


    data =  " 18. 11. 2019";
    kurs_d = 3.88;
    kurs_e = 4.29;


    while( i = true )

    {


    cout<<"Podaj kwote w zlotowkach: ";
    cin>>zl;
    cout<<endl;

    cout<<"1. Dolar"<<endl;
    cout<<"2. Euro"<<endl;
    cout<<"3. Oba"<<endl<<endl;

    cout<<"Na jaka walute chcesz przeliczyc twoja kwote: ";
    cin>>waluta;


    switch(waluta)
    {
        case 1:
            cout<<endl;
            cout<<"Kurs Dolara Amerykanskiego na dzien" << data<<": " <<kurs_d<<endl;
            cout<<endl;
            cout<<"Twoja kwota po przeliczeniu na Dolary Amerykanskie: "<<dolar(zl);
            cout<<endl;
        break;

        case 2:
            cout<<endl;
            cout<<"Kurs Euro na dzien "<<data<<" :" <<kurs_e<<endl;
            cout<<endl;
            cout<<"Twoja kwota po przeliczeniu na Euro :"<<euro(zl);
            cout<<endl;
        break;

        case 3:
            cout<<endl;
            cout<<"Kurs Dolara Amerykanskiego na dzien"<< data <<": " <<kurs_d<<endl;
            cout<<"Kurs Euro na dzien "<<data<<": "<<kurs_e<<endl;
            cout<<endl;
            cout<<"Twoja kwota po przeliczeniu na Dolary Amerykanskie: "<<dolar(zl);
            cout<<endl;
            cout<<"Twoja kwota po przeliczeniu na Euro :"<<euro(zl);
            cout<<endl;


        break;


        default:
            cout<<"Nie ma takiej opcji!";
        break;

    }


        cout<<endl<<"Nacisnij ENTER aby przeliczyc ponownie!";
        getchar();
        getchar();

        system("cls");


    }



   return 0;
}
