#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;
const char duomenu_failas[] = "Programuotojai.txt"; // Nurodome ið kur skaityti duomenis
const char rezultatu_failas[] = "Isspresta.txt"; // Nurodome á kur raðyti duomenis

int main()
{
    int n = 0,     //programuotojø skaièius
        us = 0,    //programuotojø paraðytø programø skaièius
        ds = 0,    //visø dienø, kuriomis buvo raðomos programos, skaièius
        p = 0,     //programuotojo duomenys
        d = 0,     //per dienà paraðytø programø skaièius
        up = 0;    //dalyvavimo maratone dienø skaièius, ið viso paraðytø programø skaièius
    double uv;     //vidutiniðkai per dienà paraðytø programø skaièius

    ifstream df(duomenu_failas); //failo skaitymas
    if (!df)  // Patikra
    {
        cout << "Failas neatidarytas" << endl;
        return -1;
    }
    else
    {
        ofstream rf(rezultatu_failas);  //failo raðymas
        df >> n;
        for (int i = 1; i <= n; i++)
        {
            df >> d;
            up = 0;
            for (int j = 1; j <= d; j++)
            {
                df >> p;
                up = up + p;
            }
            rf << i << " programuotojas " << up << endl;
            ds = ds + d;
            us = us + up;
        }
        df.close();
        rf << "\nViso iðspræsta " << us << endl;
        uv = (double)us / ds;
        rf << "\nVidutiniðkai 1 iðsprendë " << fixed << setprecision(1) << uv << endl;
        rf.close();
        return 0;
    }
}