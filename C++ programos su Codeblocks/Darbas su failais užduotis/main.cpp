//Prijungiamos bibliotekos
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
//duomenø ir rezultatø failø apraðymas
const char duomenu_failas [] = "Duomenys.txt";
const char rezultatu_failas [] = "Rezultatai.txt";
//pagrindinis programos ciklas
int main()
{
    int n; //mëneiø skaièius
    double suma = 0,
    b;

    ifstream df(duomenu_failas);
    if(!df)
    {
        cout << "Failas neatidarytas" << endl;

        return -1;
    }
    else
    {
        df >> n;

        for (int i = 0; i < n; i++)
        {
            df >> b;
            suma += b; // suma = suma + b
        }
        df.close();

        ofstream rf(rezultatu_failas);
        rf << fixed << setprecision(2) << suma;
        rf.close();

        return 0;
    }
}
