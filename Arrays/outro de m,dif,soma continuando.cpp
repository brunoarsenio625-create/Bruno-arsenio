#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char sair; 
    do
    {
        int x, y;
        cout << "diz o numero de x" << endl;
        cin >> x;
        cout << "diz o numero de y" << endl;
        cin >> y;
        cin.ignore();
        int soma = x + y;
        int mult = x * y;
        int dif = x - y;
        cout << "valor de x e y sao: " << x << " e " << y << endl;

        cout << "Os resultados são:" << endl;
        cout << "soma" << soma << endl;
        cout << "mult" << mult << endl;
        cout << "dif" << dif << endl;
        cout << "deseja sair? (sim(s)/não(n))" << endl;
        cin >> sair; 
        cin.ignore();
    } while (sair != 's');
    return 0;
}
