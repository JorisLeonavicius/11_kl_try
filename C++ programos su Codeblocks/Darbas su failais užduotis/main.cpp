//Prijungiamos bibliotekos
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
//duomen� ir rezultat� fail� apra�ymas
const char duomenu_failas [] = "Duomenys.txt";
const char rezultatu_failas [] = "Rezultatai.txt";
//pagrindinis programos ciklas
int main()
{
    int n; //m�nei� skai�ius
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
