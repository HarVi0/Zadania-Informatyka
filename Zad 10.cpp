#include <iostream>

using namespace std;


void euro (float x)
{
   cout<<"Twoja kwota w Euro: "<<x*4,2638;
}

void dolar (float y)
{
   cout<<"Twoja kwota w Dolarach Amerykanskich: "<<y*3,8625;
}


int main()
{
    float zl;

    cout<<"Podaj kwote w zlotowkach: ";
    cin>>zl;
    cout<<endl;
    cout<<"Kurs Dolara Amerykanskiego na dzien 9.11.2019: 3,8625"<<endl;
    cout<<"Kurs Euro na dzien 9.11.2019: 4,2638 "<<endl;
    cout<<endl;
    euro(zl);
    cout<<endl;
    dolar(zl);


    return 0;
}
