#include <iostream>

using namespace std;



int main()
{

    int change, jezyk;


    cout<<"1. Polski"<<endl;
    cout<<"2. Angielski"<<endl;
    cout<<"3. Oba"<<endl;


    cout<<"Jaki jezyk wybierasz(podaj numer): ";
    cin>>jezyk;

    switch(jezyk)
    {


        case 1:   cout <<"Podaj numer dnia tygodnia(1-7): ";
                  cin>> change;


                            switch(change)
                            {
                                case 1:     cout<<"Poniedzialek";                   break;

                                case 2:     cout<<"Wtorek";                         break;

                                case 3:     cout<<"Sroda";                          break;

                                case 4:     cout<<"Czwartek";                       break;

                                case 5:     cout<<"Piatek";                         break;

                                case 6:     cout<<"Sobota";                         break;

                                case 7:     cout<<"Niedziela";                      break;

                                default:    cout<<"Nie ma takiego dnia tygodnia!";  break;}
            break;


        case 2:   cout <<"Podaj numer dnia tygodnia(1-7): ";
                  cin>> change;


                            switch(change)
                            {
                                case 1:     cout<<"Monday";                         break;

                                case 2:     cout<<"Tuesday ";                       break;

                                case 3:     cout<<"Wednesday";                      break;

                                case 4:     cout<<"Thursday";                       break;

                                case 5:     cout<<"Friday";                         break;

                                case 6:     cout<<"Saturday";                       break;

                                case 7:     cout<<"Sunday";                         break;

                                default:    cout<<"Nie ma takiego dnia tygodnia!";  break;}

        break;

       case 3:
                    cout <<"Podaj numer dnia tygodnia(1-7): ";
                    cin>> change;


                        switch(change)
                        {
                                case 1:     cout<<"Poniedzialek-Monday";            break;

                                case 2:     cout<<"Wtorek-Tuesday ";                break;

                                case 3:     cout<<"Sroda-Wednesday";                break;

                                case 4:     cout<<"Czwartek-Thursday";              break;

                                case 5:     cout<<"Piatek-Friday";                  break;

                                case 6:     cout<<"Sobota-Saturday";                break;

                                case 7:     cout<<"Niedziela-Sunday";               break;

                                default:    cout<<"Nie ma takiego dnia tygodnia!";  break;}
        break;


        default: cout<<"Nie ma takiej opcji w menu!"; break;

    }



    return 0;
}
