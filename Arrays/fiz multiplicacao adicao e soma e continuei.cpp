#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char sair;
    int x, y;

    do
    {
        cout << "Digite o valor de x"<<endl;
        cin >> x;
        cout << "Digite o valor de y "<<endl;
        cin >> y;

        int soma = x + y;
        int mult = x * y;
        int dif = x - y;

        cout << "O valor de x: " << x << endl;
        cout << "O valor de y: " << y << endl;

        cout << "Soma: " << soma << endl;
        cout << "Multiplicação: " << mult << endl;
        cout << "Diferença: " << dif << endl;

        cout << "Se deseja sair clica (s) se não clica (n): " << endl;
        cin >> sair;
    } while (sair != 's');

    return 0;
}


