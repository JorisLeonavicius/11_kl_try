#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian"); //i�vedimui naudosime lietuvi� kalb�

    ofstream fout("rezultato_failas.txt"); // sukuriame objekt� ofstream klas�s ir suri�ame j� su failu rezultato_failas.txt

    fout << "0900 1900 2900"; // eilut�s �ra�ymas � fail�

    fout.close(); // u�darome fail�

    return 0;
}
