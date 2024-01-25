#include <iostream> //Įtraukiame biblioteką konsolei valdyti
#include <fstream> //Įtraukiame biblioteką failų nurašymui

using namespace std;
const char skaičių_failas[] = "Skaičiai.txt"; //Nurodome failo pavadinimą

int Du_skaiciai(); //Išsivedame integer tipo funkciją gauti dviem skaičiams ir grąžinti didesnį
void rezultatas(); //Išsivedame void tipo funkciją į konsolę išrašyti didesnį skaičių

int main()
{
	ofstream sf(skaičių_failas);
	int Skaicius = 0;
	Skaicius = Du_skaiciai();
	sf << Skaicius; //įrašome skaičių į failą
	sf.close(); //uždarome failą
	rezultatas();
}

int Du_skaiciai()
{
	int sk1 = 0, sk2 = 0, SK = 0;
	cout << "Iveskite du skaicius" << endl;
	cin >> sk1 >> sk2;
	if (sk1 < sk2)
		SK = sk2;
	else
		SK = sk1;
	return SK; //grąžiname didesnį skaičių
}

void rezultatas()
{
	ifstream sf(skaičių_failas);
	int Skaicius = 0;
	sf >> Skaicius; //nuskaitome skaičių iš failo
	cout << Skaicius;
	sf.close();  //uždarome failą
}