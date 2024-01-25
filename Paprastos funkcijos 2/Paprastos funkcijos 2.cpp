#include <iostream> //�traukiame bibliotek� konsolei valdyti
#include <fstream> //�traukiame bibliotek� fail� nura�ymui
#include <time.h> //�traukiame bibliotek� laikui nustatyti

using namespace std;
const char sekos_failas[] = "Seka.txt"; //Nurodome i� kur skaityti duomenis
void skai�iai(); //Sukuriame funkcij�
void skai�iai_i�vedimas();

int main() //Pasira�ome main funkcij�
{
    ifstream sf(sekos_failas);
    if (!sf) //Tikriname ar pasiekiamas duomen� failas
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gr��ta klaidingas
    }
    else
    {
        skai�iai();
        skai�iai_i�vedimas();
    }
}

void skai�iai()  //Pasira�ome skai�iai funkcij�
{
    ofstream sf(sekos_failas); //Atidarome sraut� ra�ymui � duomen� fail�
    srand(time(NULL)); //Sukuria seed, kuris bus naudojamas atsitiktinio skaiciaus generavimui
    for (int i = 0; i < 7; i++) //Kartojame cikl� iki kol pasibaigia failas
    {
        int atsitiktinis = rand() % 10 + 1; //Sugeneruoja atsitiktin� skai�i� nuo 1 iki 10
        sf << atsitiktinis << " "; //� sekos failo nuskaitome vien� skai�i�
    }
    sf.close();
}

void skai�iai_i�vedimas()
{
    ifstream sf(sekos_failas); //Pasivadiname duomen� fail�
    int atsitiktinis = 0;
    for (int i = 0; !sf.eof(); i++)
    {
        sf >> atsitiktinis;
        cout << atsitiktinis << "  "; //� konsol� �ra�ome nuskaityt� skai�i�
    }
    sf.close();
}