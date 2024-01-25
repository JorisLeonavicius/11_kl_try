#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const char duomenu_failas [] = "Duomenys.txt";
const char rezultatu_failas [] = "Rezultatai.txt";

int main()
{
    int n,
    t,
    Tmin = 0,
    Amin;

    ifstream df(duomenu_failas);
	if(!df)
	{
    	cout << "Failas neatidarytas" << endl;

    	return -1;
	}
	else
	{
    	df >> n;

    	for (int i = 0; i < n; i++)
    	{
        	df >> t;
        	Tmin += t;
    	}
    	df.close();

    	Amin = Tmin / n;

    	ofstream rf(rezultatu_failas);
    	rf << Tmin << endl << Amin << endl;
    	rf.close();

    	return 0;
	}
}
