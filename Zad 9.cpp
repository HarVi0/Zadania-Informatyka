#include <iostream>

using namespace std;

int main()
{
    int change;

    cout <<"Podaj numer dnia tygodnia(1-7): ";
    cin>> change;


    switch(change)
     {
    case 1:     cout<<"Monday";    break;

    case 2:     cout<<"Tuesday ";  break;

    case 3:     cout<<"Wednesday"; break;

    case 4:     cout<<"Thursday";  break;

    case 5:     cout<<"Friday";    break;

    case 6:     cout<<"Saturday";  break;

    case 7:     cout<<"Sunday";    break;

    default:    cout<<"Nie ma takiego dnia tygodnia!";  break;

     }
    return 0;
}
