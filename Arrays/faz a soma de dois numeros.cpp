#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, soma;
	cout << "faz a soma d dois numeros"<< endl;
	cout << "fala o primeiro numero";
	cin >> a;
	cout << "fala o segundo numero";
	cin >> b;
	soma = a + b;
	cout << "a soma d " << a << " + " << b << " = " << soma << endl;
	return 0;
}