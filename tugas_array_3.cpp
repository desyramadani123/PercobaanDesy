#include <iostream>
using namespace std;

int main()
{
    int i;
    char z;
    char Desy[20] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'};
    cout << ("Masukan Inputan : ");
    cin >> z;
    for (i = 0; i <= 20; i++)
    {
        if (z == Desy[i])
            cout << "Abjad yang anda masukan sesuai " << Desy[i] << endl;
        else
            continue;
    }

    return 0;
}