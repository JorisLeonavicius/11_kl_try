#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <fstream> //Átraukiame bibliotekà failø nuraðymui

using namespace std;
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome ið kur skaityti duomenis
void þodþiai(); //Sukuriame funkcijà nuskaityti ið duomenø failo þodá ir já paraðyti á konsolæ

ifstream df(duomenu_failas); //Pasivadiname duomenø failà

int main() //Pasiraðome main funkcijà
{
    if (!df) //Tikriname ar pasiekiamas duomenø failas
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gráþta klaidingas
    }
    else
    {
        for (int i = 0; !df.eof(); i++) //Kartojame ciklà iki kol pasibaigia failas
            þodþiai();
    }
}

void þodþiai()  //Pasiraðome þodþiai funkcijà
{
    string zodis; //Suskuriame þodiná kintamàji vienam þodþiui áraðyti
    df >> zodis; //Ið duomenø failo nuskaitome vienà þodá
    cout << "- " << zodis << endl; //Á konsolæ áraðome nuskaitytà þodá
}