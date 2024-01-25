#include <iostream> //�traukiame bibliotek� konsolei valdyti
#include <fstream> //�traukiame bibliotek� fail� nura�ymui
#include <iomanip> //�traukiame bibliotek� manipuliuoti � konsol� i�ra�omoms reik�m�ms

using namespace std; //naudojamos std tipo komandos, tod�l para�omas sutrumpinimas
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome duomen� failo pavadinim�

void talpos(int& I, int& U, int& R); //I�sivedame void tipo funkcij� apskai�iuoti tr�kstamo dyd�io reik�m�

//Pagrindin�s funkcijos prad�ia
int main()
{
	int n,
		I = 0, //elektros srov�s stipris
		U = 0, //�tampa
		R = 0; //var�a
	ifstream df(duomenu_failas); //Para�ome duomen� failo vardo sutrumpinim�
	if (!df) //tikriname ar duomen� failas pasiekiamas
		cout << "Failas nerastas.";
	else
	{
		df >> n;
		cout << "Bandym� rezultatai\n_-------------------------\n     I        U       R\n_-------------------------\n";
		for (int i = 0; i < n; i++)
		{
			df >> I >> U >> R;
			talpos(I, U, R);
			cout << setw(6) << I << setw(9) << U << setw(8) << R << endl;
		}
		cout << "_-------------------------";
	}
	df.close(); //u�darome duomen� fail�
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