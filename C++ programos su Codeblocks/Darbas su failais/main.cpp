#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian"); //iðvedimui naudosime lietuviø kalbà

    ofstream fout("rezultato_failas.txt"); // sukuriame objektà ofstream klasës ir suriðame já su failu rezultato_failas.txt

    fout << "0900 1900 2900"; // eilutës áraðymas á failà

    fout.close(); // uþdarome failà

    return 0;
}
