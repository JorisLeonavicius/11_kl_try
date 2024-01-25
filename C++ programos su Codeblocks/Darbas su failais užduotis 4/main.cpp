#include <iostream>
#include <fstream>
using namespace std;

const char duomenu_failas [] = "Duomenys.txt";
const char rezultatu_failas [] = "Rezultatai.txt";

int main()
{
	int n, //dienu skaicius
	x, //suviu skaicius
	b, //baudos minuciu skaicius
	t, //per kiek laiko dalyvis iveike varzybu etapa
	k, //kiek kartu dalyvis pataik4 i taikinius
	T = 0; //visas laikas

	ifstream df(duomenu_failas);
    if(!df)
    {
   	 cout << "Failas neatidarytas" << endl;

   	 return -1;
    }
    else
    {
   	 df >> n >> x >> b;
   	 cout << n << " " << x << " " << b << endl;

   	 for (int i = 0; i < n; i++)
   	 {
   		 df >> t >> k;
   		 cout << t << " " << k << endl;
   		 T += t;
   		 T += (x - k) * b;
   		 cout << T << endl;
   	 }
   	 df.close();

   	 ofstream rf(rezultatu_failas);
   	 rf << T << endl;
   	 rf.close();

   	 return 0;
    }
}
