#include <iostream> //�traukiame bibliotek� konsolei valdyti
#include <fstream> //�traukiame bibliotek� fail� nura�ymui

using namespace std;
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome i� kur skaityti duomenis
void �od�iai(); //Sukuriame funkcij� nuskaityti i� duomen� failo �od� ir j� para�yti � konsol�

ifstream df(duomenu_failas); //Pasivadiname duomen� fail�

int main() //Pasira�ome main funkcij�
{
    if (!df) //Tikriname ar pasiekiamas duomen� failas
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gr��ta klaidingas
    }
    else
    {
        for (int i = 0; !df.eof(); i++) //Kartojame cikl� iki kol pasibaigia failas
            �od�iai();
    }
}

void �od�iai()  //Pasira�ome �od�iai funkcij�
{
    string zodis; //Suskuriame �odin� kintam�ji vienam �od�iui �ra�yti
    df >> zodis; //I� duomen� failo nuskaitome vien� �od�
    cout << "- " << zodis << endl; //� konsol� �ra�ome nuskaityt� �od�
}