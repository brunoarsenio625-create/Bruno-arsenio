#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num, i;
	string nomes[5];
	int idades[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "diz o nome da " << i + 1 << "menina" << endl;
		cin >> nomes[i];
		idades[i] = (rand() % 40) + 15;
	}
	cout << "qual é o nomero que queres saber da menina";
	cin >> num;
	cout << "menina" << nomes << "";
	cout << "ela tem" << idades << "anos";

}
