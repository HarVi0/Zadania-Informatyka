#include <iostream>

using namespace std;


void euro (float x)
{
   cout<<"Twoja kwota po przeliczeniu na Euro: "<<x/4,28;
}

void dolar (float y)
{
   cout<<"Twoja kwota po przeliczeniu na Dolary Amerykanskie: "<<y/3,88;
}


int main()
{
    float zl;
    int waluta;



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
            cout<<"Kurs Dolara Amerykanskiego na dzien 18.11.2019: 3,88"<<endl;
            cout<<endl;
            dolar(zl);
            cout<<endl;
        break;

        case 2:
            cout<<endl;
            cout<<"Kurs Euro na dzien 18.11.2019: 4,28 "<<endl;
            cout<<endl;
            euro(zl);
            cout<<endl;
        break;

        case 3:
            cout<<endl;
            cout<<"Kurs Dolara Amerykanskiego na dzien 18.11.2019: 3,88"<<endl;
            cout<<"Kurs Euro na dzien 18.11.2019: 4,28 "<<endl;
            cout<<endl;
            dolar(zl);
            cout<<endl;
            euro(zl);
            cout<<endl;
        break;


        default:
            cout<<"Nie ma takiej opcji!";
        break;
    }


   return 0;
}
