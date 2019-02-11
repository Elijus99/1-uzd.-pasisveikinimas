#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
struct duomenys {
	string vardas;
	int dydis;
};
duomenys ivedimas(duomenys A);
void lentele(duomenys A);
int main()
{
	duomenys A;
	A = ivedimas(A);
	lentele(A);
	system("pause");
	return 0;
}
duomenys ivedimas(duomenys A)
{
	cout << "Koks Jusu vardas?" << endl;
	cin >> A.vardas;
	cout << "Iveskite remelio dydi (nuo 1 iki 10)" << endl;
	cin >> A.dydis;
	return A;
}
void lentele(duomenys A)
{
	string pasisveikinimas;
	if (A.vardas.back() == 's') pasisveikinimas = "Sveikas, " + A.vardas + "!";
	else pasisveikinimas = "Sveika, " + A.vardas + "!";
	int size = pasisveikinimas.size() + 12;
	for (int i = 0; i < size; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < A.dydis; i++)
	{
		cout << "*";
		for (int i = 0; i < size - 2; i++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	cout << "*";
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << pasisveikinimas;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "*" << endl;
	for (int i = 0; i < A.dydis; i++)
	{
		cout << "*";
		for (int i = 0; i < size - 2; i++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "*";
	}
	cout << endl;
}