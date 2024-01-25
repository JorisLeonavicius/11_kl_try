#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <fstream> //Átraukiame bibliotekà failø nuraðymui
#include <time.h> //Átraukiame bibliotekà laikui nustatyti

using namespace std;
const char duomenø_failas[] = "Duomenys.txt"; //Nurodome ið kur skaityti duomenis
const char rezultatø_failas[] = "Rezultatai.txt";
void þodis(); //Sukuriame funkcijà
void skaièius();
void funkcijos();

int main() //Pasiraðome main funkcijà
{
    setlocale(LC_ALL, "Lithuanian");  //iðvedimui naudosime lietuviø kalbà
    ifstream df(duomenø_failas);
    ofstream rf(rezultatø_failas);
    if (!df) //Tikriname ar pasiekiamas duomenø failas
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gráþta klaidingas
    }
    else
    {
        funkcijos();
    }
}

void þodis()
{
    string þodis;
    ifstream df(duomenø_failas);
    srand(time(NULL)); //Sukuria seed, kuris bus naudojamas atsitiktinio skaiciaus generavimui
    int atsitiktinis = rand() % 10 + 1; //Sugeneruoja atsitiktiná skaièiø nuo 1 iki 10
    for (int i = 0; i < atsitiktinis; i++)
    {
        df >> þodis;
    }
    cout << þodis << endl;
    df.close();
}

void skaièius()
{
    ofstream rf(rezultatø_failas); //Atidarome srautà raðymui á rezultatø failà
    int atsitiktinis = rand() % 10 + 1; //Sugeneruoja atsitiktiná skaièiø nuo 1 iki 10
    rf << atsitiktinis << endl; //Á sekos failo nuskaitome vienà skaièiø
    rf.close();
    cout << atsitiktinis;
}

void funkcijos()
{
    þodis();
    skaièius();
}
