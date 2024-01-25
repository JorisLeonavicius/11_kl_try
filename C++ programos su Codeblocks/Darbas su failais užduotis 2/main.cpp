//prijungiamos bibliotekos
#include <iostream>
#include <fstream>
#include <iomanip>
//duomen7 ir rezultatu failu aprasymas
using namespace std;


const char duomenu_failas [] = "Duomenys.txt";
const char rezultatu_failas [] = "Rezultatai.txt";
//pagrindinis programos ciklas
int main()
{
    int k, //kiek pirmaja prekybos diena parduota porciju
    m, //keliomis porcijomis kiekviena kita diena buvo parduodama daugiau
    n, //kelias dienas buvo prekiauta ledais
    vk = 0; // kiek ledu porciju parduota

    ifstream df(duomenu_failas);
    if(!df)
    {
        cout << "Failas neatidarytas" << endl;

        return -1;
    }
    else
    {
        df >> k >> m >> n;

        for (int i = 0; i < n; i++)
        {
            vk += k;
            k += m;
        }
        df.close();

        ofstream rf(rezultatu_failas);
        rf << vk;
        rf.close();

        return 0;
    }
}
