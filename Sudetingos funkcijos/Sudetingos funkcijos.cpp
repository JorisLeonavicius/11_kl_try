#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <fstream> //Átraukiame bibliotekà failø nuraðymui

using namespace std; //naudojamos std tipo komandos, todël paraðomas sutrumpinimas
const char duomenu_failas[] = "Duomenys.txt";
const char rezultatu_failas[] = "Rezultatai.txt";

int lenteles(int kelintas); //funkcijos, skaièiuojanèios lenteliø kieká, prototipas

//Pagrindinës funkcijos pradþia
int main()
{
	//Kintamøjø apraðymas
	int kabinetu_skaicius = 0,
		lenteliu_skaicius = 0;
	ifstream df(duomenu_failas); 
	df >> kabinetu_skaicius;
	df.close();
	for (int i = 1; i <= kabinetu_skaicius; i++)
	{
		lenteliu_skaicius += lenteles(i);
	}
	ofstream rf(rezultatu_failas);
	rf << lenteliu_skaicius;
	rf.close();
	return 0;
}

int lenteles(int kelintas)
{
	int lent = 0;
	if (kelintas >= 0 && kelintas < 10)
		lent++;
	else if (kelintas >= 10 && kelintas < 100)
		lent = lent + 2;
	else if (kelintas >= 100 && kelintas < 1000)
		lent = lent + 3;
	else if (kelintas >= 1000 && kelintas < 10000)
		lent = lent + 4;
	else if (kelintas >= 10000 && kelintas < 100000)
		lent = lent + 5;
	return lent;
}