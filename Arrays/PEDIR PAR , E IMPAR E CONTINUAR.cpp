#include <iostream>
#include <locale.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Portuguese");
	int num;
	char sair;
	do
	{


	cout <<"diz um numero"<< endl;
	cin >> num;
	if (num % 2 == 0)
	{
		cout << " se o numero for resto 0 é par"<<endl;
	}
	else
	{
	cout << "se o numero for resto 1 é impar"<<endl;
	}
	cout << " Se deseja sair aperta (s). Caso contrário, use qualquer outra tecla para continuar." << endl;
	cin >> sair;
	} while (sair != 's');
	return 0;
}
