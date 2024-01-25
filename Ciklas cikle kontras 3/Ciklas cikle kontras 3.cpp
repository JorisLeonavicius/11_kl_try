#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const char duomenø_failas[] = "Knygos.txt";
const char rezultatø_failas[] = "Puslapiai.txt";

// programos pagrindinis ciklas
int main()
{
    int n, // knygø skaièius
        p, // puslapiø skaièius vienoje knygoje
        viso_skaitmenø = 0; // visø skaitmenø suma

    ifstream df(duomenø_failas);
    if (!df)
    {
        cout << "Failas neatidarytas" << endl;

        return -1;
    }
    else
    {
        ofstream rf(rezultatø_failas);
        df >> n;

        for (int i = 0; i < n; i++)
        {
            df >> p;
            viso_skaitmenø = 0;
            for (int j = 1; j <= p; j++)
            {
                if (j < 10)
                {
                    viso_skaitmenø++;
                }
                else
                {
                    viso_skaitmenø += 2;
                }
            }
            
            rf << p << " viso skaitmenø " << viso_skaitmenø << endl;
        }
        df.close();
        rf.close();
        return 0;
    }
}