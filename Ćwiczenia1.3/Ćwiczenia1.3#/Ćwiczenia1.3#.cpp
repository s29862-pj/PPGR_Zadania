#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Podaj dowolną liczbę: " << endl;
	cin >> number;

	if (number % 2 == 0) {
		cout << "Liczba jest parzysta.";
	}
	else if (number == 0) {
		cout << "Podana liczba to zero.";
	}
	else{
		cout << "Liczba jest nieparzysta.";
	}	
}
