#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
const char duomenu_failas[] = "Temperaturos.txt"; //Nurodome i� kur skaityti duomenis
const char rezultatu_failas[] = "Vidutines.txt"; //Nurodome � kur ra�yti duomenis

int main() //pasira�ome main funkcij�
{
    double n = 0,
        temp = 0,
        suma = 0;
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
        df.close(); //u�darome duomen� fail�
        rf.close(); //u�darome rezultat� fail�
        return 0; //Kodas gr��ta taisyklingas
    }
}
