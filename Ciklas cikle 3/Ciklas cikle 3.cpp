#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
const char duomenu_failas[] = "Temperaturos.txt"; //Nurodome ið kur skaityti duomenis
const char rezultatu_failas[] = "Vidutines.txt"; //Nurodome á kur raðyti duomenis

int main() //pasiraðome main funkcijà
{
    double n = 0,
        temp = 0,
        suma = 0;
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
        for (int i = 1; i <= n; i++)
        {
            suma = 0;
            for (int j = 0; j < 7; j++)
            {
                df >> temp;
                suma += temp;
            }
            rf << i << " " << fixed << setprecision(3) << suma/7 << endl;
        }
        df.close(); //uþdarome duomenø failà
        rf.close(); //uþdarome rezultatø failà
        return 0; //Kodas gráþta taisyklingas
    }
}
