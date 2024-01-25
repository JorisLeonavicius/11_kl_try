#include <iostream> //Átraukiame bibliotekà konsolei valdyti
#include <time.h>

using namespace std;

void skaiciai(int kiek, int minimumas, int maksimumas);

int main()
{
	int kiek = 0, minimumas = 0, maksimumas = 0;
	cout << "Kiek sugeneruoti skaiciu? ";
	cin >> kiek;
	cout << "Koks yra skaiciu minimumas? ";
	cin >> minimumas;
	cout << "Koks yra skaiciu maksimumas? ";
	cin >> maksimumas;
	skaiciai(kiek, minimumas, maksimumas);
	return 0;
}

void skaiciai(int kiek, int minimumas, int maksimumas)
{
	int c = 0;
	srand(time(NULL)); // sukuria seed, kuris bus naudojamas atsitiktinio skaiciaus generavimui
	for (int i = 0; c < kiek;)
	{
		int atsitiktinis = rand() % 100 + 1; // nuo 1 iki 100
		if (atsitiktinis > minimumas && atsitiktinis < maksimumas)
		{
			cout << atsitiktinis << ", ";
			c++;
		}
	}
}