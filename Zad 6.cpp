#include <iostream>

using namespace std;

int main()
{
    float liczba1, kwadrat, szescian;

    for(int  i=1; i<=100; i++)
    {
        kwadrat= i * i; szescian= i * i * i;
        cout<<"liczba: "<<i<<"     "<<"Kwadrat: "<<kwadrat<<"     "<<"Szescian: "<<szescian<<endl;
    }


    return 0;
}
