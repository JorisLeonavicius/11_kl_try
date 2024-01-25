#include <iostream> //�traukiame bibliotek� konsolei valdyti
#include <fstream> //�traukiame bibliotek� fail� nura�ymui
#include <iomanip> //�traukiame bibliotek� manipuliuoti � konsol� i�ra�omoms reik�m�ms

using namespace std; //naudojamos std tipo komandos, tod�l para�omas sutrumpinimas
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome duomen� failo pavadinim�

void konvertavimas(int m, double& c, double& p, double& j); //I�sivedame void tipo funkcij� matavimo reik�m�ms konvertuoti

//Pagrindin�s funkcijos prad�ia
int main()
{
	int metrai = 0;
	double coliai = 0, pedos = 0, jardai = 0; //matavimo vienet� kintamieji su skai�iais po kablelio
	ifstream df(duomenu_failas); //Para�ome failo vardo sutrumpinim�
	if (!df) //tikriname ar failas pasiekiamas
	cout << "Failas nerastas.";
	else
	{
		df >> metrai; //i�ra�ome metr� kintamojo reik�m� i� duomen� failo
		konvertavimas(metrai, coliai, pedos, jardai); //konvertavimo funkcijai duodame reik�mes
		cout << "Metrai - " << metrai << endl << "Coliai - " << fixed << setprecision(2) << coliai << endl << "P�dos - " << fixed << setprecision(2) << pedos << endl << "Jardai - " << fixed << setprecision(2) << jardai << endl;
	}
	return 0;
}

void konvertavimas(int m, double& c, double& p, double& j)
{
	c = m * 39.37; //i� metr� konvertuojame � colius
	p = c / 12; //i� coli� konvertuojame � p�das
	j = p / 3; //i� p�d� konvertuojame � jardus
}