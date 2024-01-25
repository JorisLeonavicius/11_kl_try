#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
const char duomenu_failas[] = "Krituliai.txt"; //Nurodome i� kur skaityti duomenis
const char rezultatu_failas[] = "Krituliaiviso.txt"; //Nurodome � kur ra�yti duomenis

int main() //pasira�ome main funkcij�
{
    double n = 0,
        p = 0,
        k = 0,
        kp = 0,
        kv = 0,
        vkd = 0;
    ifstream df(duomenu_failas); //Pasivadiname duomen� fail�
    if (!df)
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gr��ta klaidingas
    }
    else
    {
        ofstream rf(rezultatu_failas); //pasivadiname rezultat� fail�
        df >> n; //nuskaitome duomenis i� failo
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
        rf << "Viso krituli� : " << kv;
        df.close(); //u�darome duomen� fail�
        rf.close(); //u�darome rezultat� fail�
        return 0; //Kodas gr��ta taisyklingas
    }
}
