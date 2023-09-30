#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Podaj dowoln¹ liczbê: " << endl;
    cin >> number;
    if (number >= 1)  {
        cout << "Podana liczba jest dodatnia.";
    }
    else if (number <=-1) {
        cout << "Podana liczba jest ujemna.";
    }
    else if (number == 0) {
        cout << "Podana liczba jest zerem.";
    }
}
