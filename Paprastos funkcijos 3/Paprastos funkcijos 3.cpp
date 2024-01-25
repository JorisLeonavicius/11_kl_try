#include <iostream> //�traukiame bibliotek� konsolei valdyti
#include <fstream> //�traukiame bibliotek� fail� nura�ymui
#include <time.h> //�traukiame bibliotek� laikui nustatyti

using namespace std;
const char duomen�_failas[] = "Duomenys.txt"; //Nurodome i� kur skaityti duomenis
const char rezultat�_failas[] = "Rezultatai.txt";
void �odis(); //Sukuriame funkcij�
void skai�ius();
void funkcijos();

int main() //Pasira�ome main funkcij�
{
    setlocale(LC_ALL, "Lithuanian");  //i�vedimui naudosime lietuvi� kalb�
    ifstream df(duomen�_failas);
    ofstream rf(rezultat�_failas);
    if (!df) //Tikriname ar pasiekiamas duomen� failas
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gr��ta klaidingas
    }
    else
    {
        funkcijos();
    }
}

void �odis()
{
    string �odis;
    ifstream df(duomen�_failas);
    srand(time(NULL)); //Sukuria seed, kuris bus naudojamas atsitiktinio skaiciaus generavimui
    int atsitiktinis = rand() % 10 + 1; //Sugeneruoja atsitiktin� skai�i� nuo 1 iki 10
    for (int i = 0; i < atsitiktinis; i++)
    {
        df >> �odis;
    }
    cout << �odis << endl;
    df.close();
}

void skai�ius()
{
    ofstream rf(rezultat�_failas); //Atidarome sraut� ra�ymui � rezultat� fail�
    int atsitiktinis = rand() % 10 + 1; //Sugeneruoja atsitiktin� skai�i� nuo 1 iki 10
    rf << atsitiktinis << endl; //� sekos failo nuskaitome vien� skai�i�
    rf.close();
    cout << atsitiktinis;
}

void funkcijos()
{
    �odis();
    skai�ius();
}
