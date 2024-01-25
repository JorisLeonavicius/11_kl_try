#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
const char duomenu_failas[] = "Krituliai.txt"; //Nurodome ið kur skaityti duomenis
const char rezultatu_failas[] = "Krituliaiviso.txt"; //Nurodome á kur raðyti duomenis

int main() //pasiraðome main funkcijà
{
    double n = 0,
        p = 0,
        k = 0,
        kp = 0,
        kv = 0,
        vkd = 0;
    ifstream df(duomenu_failas); //Pasivadiname duomenø failà
    if (!df)
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gráþta klaidingas
    }
    else
    {
        ofstream rf(rezultatu_failas); //pasivadiname rezultatø failà
        df >> n; //nuskaitome duomenis ið failo
        for (int nr = 1; nr <= n; nr++)
        {
            df >> p;
            kp = 0;
            for (int i = 0; i < p; i++)
            {
                df >> k;
                kp += k;
                kv += k;
            }
            rf << nr << " " << fixed << setprecision(2) << kp / p << endl;
        }
        rf << "Viso krituliø : " << kv;
        df.close(); //uþdarome duomenø failà
        rf.close(); //uþdarome rezultatø failà
        return 0; //Kodas gráþta taisyklingas
    }
}
