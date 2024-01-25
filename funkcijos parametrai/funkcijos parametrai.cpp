#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <fstream> //Átraukiame bibliotekà failø nuraðymui
#include <iomanip> //Átraukiame bibliotekà manipuliuoti á konsolæ iðraðomoms reikðmëms

using namespace std; //naudojamos std tipo komandos, todël paraðomas sutrumpinimas
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome duomenø failo pavadinimà

void konvertavimas(int m, double& c, double& p, double& j); //Iðsivedame void tipo funkcijà matavimo reikðmëms konvertuoti

//Pagrindinës funkcijos pradþia
int main()
{
	int metrai = 0;
	double coliai = 0, pedos = 0, jardai = 0; //matavimo vienetø kintamieji su skaièiais po kablelio
	ifstream df(duomenu_failas); //Paraðome failo vardo sutrumpinimà
	if (!df) //tikriname ar failas pasiekiamas
	cout << "Failas nerastas.";
	else
	{
		df >> metrai; //iðraðome metrø kintamojo reikðmæ ið duomenø failo
		konvertavimas(metrai, coliai, pedos, jardai); //konvertavimo funkcijai duodame reikðmes
		cout << "Metrai - " << metrai << endl << "Coliai - " << fixed << setprecision(2) << coliai << endl << "Pëdos - " << fixed << setprecision(2) << pedos << endl << "Jardai - " << fixed << setprecision(2) << jardai << endl;
	}
	return 0;
}

void konvertavimas(int m, double& c, double& p, double& j)
{
	c = m * 39.37; //ið metrø konvertuojame á colius
	p = c / 12; //ið coliø konvertuojame á pëdas
	j = p / 3; //ið pëdø konvertuojame á jardus
}