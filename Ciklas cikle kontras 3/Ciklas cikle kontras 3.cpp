#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const char duomen�_failas[] = "Knygos.txt";
const char rezultat�_failas[] = "Puslapiai.txt";

// programos pagrindinis ciklas
int main()
{
    int n, // knyg� skai�ius
        p, // puslapi� skai�ius vienoje knygoje
        viso_skaitmen� = 0; // vis� skaitmen� suma

    ifstream df(duomen�_failas);
    if (!df)
    {
        cout << "Failas neatidarytas" << endl;

        return -1;
    }
    else
    {
        ofstream rf(rezultat�_failas);
        df >> n;

        for (int i = 0; i < n; i++)
        {
            df >> p;
            viso_skaitmen� = 0;
            for (int j = 1; j <= p; j++)
            {
                if (j < 10)
                {
                    viso_skaitmen�++;
                }
                else
                {
                    viso_skaitmen� += 2;
                }
            }
            
            rf << p << " viso skaitmen� " << viso_skaitmen� << endl;
        }
        df.close();
        rf.close();
        return 0;
    }
}