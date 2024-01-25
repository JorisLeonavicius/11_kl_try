#include <iostream> //Įtraukiame biblioteką konsolei valdyti
#include <fstream> //Įtraukiame biblioteką failų nurašymui

using namespace std;
const char rezultatų_failas[] = "Rezultatai.txt"; //Nurodome failo pavadinimą

bool pazymys(); //išsivedame bool tipo funkciją, kuri gaus pažymį, nustatys ar jis teigiamas ar neigiamas ir išves atsakymą į konsolę ir failą

int main()
{
	pazymys();
}

bool pazymys()
{
	int pazym = 0;
	ofstream rf(rezultatų_failas);
	cout << "Iveskite savo pazymi(tarp 1 ir 10): ";
	cin >> pazym; //vartotojas įrašo savo pažymį
	if (pazym >= 4)
	{
		cout << "\nPazymys yra teigiamas."; //išrašome į kosolę, kad pažymys teigiamas
		rf << "Pazymys yra teigiamas."; //įrašome į failą, kad pažymys teigiamas
		return true; //grąžiname true reikšmę
	}
	else
	{
		cout << "\nPazymys yra neigiamas."; //išrašome į kosolę, kad pažymys neigiamas
		rf << "Pazymys yra neigiamas."; //įrašome į failą, kad pažymys neigiamas
		return false; //grąžiname false reikšmę
	}
}