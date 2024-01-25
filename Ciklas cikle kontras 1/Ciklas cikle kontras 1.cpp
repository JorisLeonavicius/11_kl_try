#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;
const char duomenu_failas[] = "Programuotojai.txt"; // Nurodome i� kur skaityti duomenis
const char rezultatu_failas[] = "Isspresta.txt"; // Nurodome � kur ra�yti duomenis

int main()
{
    int n = 0,     //programuotoj� skai�ius
        us = 0,    //programuotoj� para�yt� program� skai�ius
        ds = 0,    //vis� dien�, kuriomis buvo ra�omos programos, skai�ius
        p = 0,     //programuotojo duomenys
        d = 0,     //per dien� para�yt� program� skai�ius
        up = 0;    //dalyvavimo maratone dien� skai�ius, i� viso para�yt� program� skai�ius
    double uv;     //vidutini�kai per dien� para�yt� program� skai�ius

    ifstream df(duomenu_failas); //failo skaitymas
    if (!df)  // Patikra
    {
        cout << "Failas neatidarytas" << endl;
        return -1;
    }
    else
    {
        ofstream rf(rezultatu_failas);  //failo ra�ymas
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
        rf << "\nViso i�spr�sta " << us << endl;
        uv = (double)us / ds;
        rf << "\nVidutini�kai 1 i�sprend� " << fixed << setprecision(1) << uv << endl;
        rf.close();
        return 0;
    }
}