#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <fstream> //Átraukiame bibliotekà failø nuraðymui
#include <iomanip> //Átraukiame bibliotekà manipuliuoti á konsolæ iðraðomoms reikðmëms

using namespace std; //naudojamos std tipo komandos, todël paraðomas sutrumpinimas
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome duomenø failo pavadinimà
const char rezultatu_failas[] = "Rezultatai.txt"; //Nurodome rezultatø failo pavadinimà

void talpos(int total, int& penki, int& du, int& vienas); //Iðsivedame void tipo funkcijà 

//Pagrindinës funkcijos pradþia
int main()
{
	int n, viso_litru = 0, penki_litrai = 0, du_litrai = 0, vienas_litras = 0;
	ifstream df(duomenu_failas); //Paraðome duomenø failo vardo sutrumpinimà
	ofstream rf(rezultatu_failas); //Paraðome rezultatø failo vardo sutrumpinimà
	if (!df) //tikriname ar duomenø failas pasiekiamas
		cout << "Failas nerastas.";
	else
	{
		df >> n;
		for (int i = 0; i < n; i++)
		{
			df >> viso_litru;
			talpos(viso_litru, penki_litrai, du_litrai, vienas_litras);
			rf << left << setw(4) << penki_litrai << setw(4) << du_litrai << setw(2) << vienas_litras << endl;
		}
	}
	rf.close(); //uþdarome rezultatø failà
	df.close(); //uþdarome duomenø failà
	return 0;
}

void talpos(int total, int& penki, int& du, int& vienas)
{
	penki = total / 5;
	du = (total - penki * 5) / 2;
	vienas = total - penki * 5 - du * 2;
}