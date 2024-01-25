#include <iostream> //�traukiame bibliotek� konsolei valdyti
#include <fstream> //�traukiame bibliotek� fail� nura�ymui
#include <iomanip> //�traukiame bibliotek� manipuliuoti � konsol� i�ra�omoms reik�m�ms

using namespace std; //naudojamos std tipo komandos, tod�l para�omas sutrumpinimas
const char duomenu_failas[] = "Duomenys.txt"; //Nurodome duomen� failo pavadinim�
const char rezultatu_failas[] = "Rezultatai.txt"; //Nurodome rezultat� failo pavadinim�

void talpos(int total, int& penki, int& du, int& vienas); //I�sivedame void tipo funkcij� 

//Pagrindin�s funkcijos prad�ia
int main()
{
	int n, viso_litru = 0, penki_litrai = 0, du_litrai = 0, vienas_litras = 0;
	ifstream df(duomenu_failas); //Para�ome duomen� failo vardo sutrumpinim�
	ofstream rf(rezultatu_failas); //Para�ome rezultat� failo vardo sutrumpinim�
	if (!df) //tikriname ar duomen� failas pasiekiamas
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
	rf.close(); //u�darome rezultat� fail�
	df.close(); //u�darome duomen� fail�
	return 0;
}

void talpos(int total, int& penki, int& du, int& vienas)
{
	penki = total / 5;
	du = (total - penki * 5) / 2;
	vienas = total - penki * 5 - du * 2;
}