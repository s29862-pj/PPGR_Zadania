#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
	
	int number1;
	int number2;
	int number3;
	
	cout << "Podaj dowolne trzy liczby lub cyfry: ";
	cin >> number1 >> number2 >> number3;
	list<int> numbers = { number1, number2, number3 };

	cout << "Oto największa liczba/cyfra: ";
	cout << max({number1, number2, number3}) << endl;

	}
