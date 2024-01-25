#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <fstream> //Átraukiame bibliotekà failø nuraðymui
#include <iomanip> //Átraukiame bibliotekà manipuliuoti á konsolæ iðraðomoms reikðmëms

using namespace std; //naudojamos std tipo komandos, todël paraðomas sutrumpinimas
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome duomenø failo pavadinimà

void talpos(int& I, int& U, int& R); //Iðsivedame void tipo funkcijà apskaièiuoti trûkstamo dydþio reikðmæ

//Pagrindinës funkcijos pradþia
int main()
{
	int n,
		I = 0, //elektros srovës stipris
		U = 0, //átampa
		R = 0; //varþa
	ifstream df(duomenu_failas); //Paraðome duomenø failo vardo sutrumpinimà
	if (!df) //tikriname ar duomenø failas pasiekiamas
		cout << "Failas nerastas.";
	else
	{
		df >> n;
		cout << "Bandymø rezultatai\n_-------------------------\n     I        U       R\n_-------------------------\n";
		for (int i = 0; i < n; i++)
		{
			df >> I >> U >> R;
			talpos(I, U, R);
			cout << setw(6) << I << setw(9) << U << setw(8) << R << endl;
		}
		cout << "_-------------------------";
	}
	df.close(); //uþdarome duomenø failà
	return 0;
}

void talpos(int& I, int& U, int& R)
{
	if (I == 0)
		I = U / R;
	else if (U == 0)
		U = I * R;
	else if (R == 0)
		R = U / I;
}