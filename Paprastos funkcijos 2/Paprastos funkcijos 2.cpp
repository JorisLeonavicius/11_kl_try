#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <fstream> //Átraukiame bibliotekà failø nuraðymui
#include <time.h> //Átraukiame bibliotekà laikui nustatyti

using namespace std;
const char sekos_failas[] = "Seka.txt"; //Nurodome ið kur skaityti duomenis
void skaièiai(); //Sukuriame funkcijà
void skaièiai_iðvedimas();

int main() //Pasiraðome main funkcijà
{
    ifstream sf(sekos_failas);
    if (!sf) //Tikriname ar pasiekiamas duomenø failas
    {
        cout << "Failas neatidarytas" << endl;

        return -1; //Kodas gráþta klaidingas
    }
    else
    {
        skaièiai();
        skaièiai_iðvedimas();
    }
}

void skaièiai()  //Pasiraðome skaièiai funkcijà
{
    ofstream sf(sekos_failas); //Atidarome srautà raðymui á duomenø failà
    srand(time(NULL)); //Sukuria seed, kuris bus naudojamas atsitiktinio skaiciaus generavimui
    for (int i = 0; i < 7; i++) //Kartojame ciklà iki kol pasibaigia failas
    {
        int atsitiktinis = rand() % 10 + 1; //Sugeneruoja atsitiktiná skaièiø nuo 1 iki 10
        sf << atsitiktinis << " "; //Á sekos failo nuskaitome vienà skaièiø
    }
    sf.close();
}

void skaièiai_iðvedimas()
{
    ifstream sf(sekos_failas); //Pasivadiname duomenø failà
    int atsitiktinis = 0;
    for (int i = 0; !sf.eof(); i++)
    {
        sf >> atsitiktinis;
        cout << atsitiktinis << "  "; //Á konsolæ áraðome nuskaitytà skaièiø
    }
    sf.close();
}