#include <iostream>

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Lithuanian");
    int grade = 1;
    cout << "Koks jūsų pažymys?(Skaičius)" << endl;
    cin >> grade;
    if (grade == 10 || grade == 9)
    cout << "Jūsų pažymys raidėmis yra A";
        else if (grade == 8)
        cout << "Jūsų pažymys raidėmis yra B";
            else if (grade == 7)
            cout << "Jūsų pažymys raidėmis yra C";
                else if (grade == 6)
                cout << "Jūsų pažymys raidėmis yra D";
                    else
                    cout << "Jūsų pažymys raidėmis yra E";
    return 0;
}
