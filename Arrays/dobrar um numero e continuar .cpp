#include <iostream>
#include <locale.h>
using namespace std;
int main()
{   
    char sair;
    setlocale(LC_ALL, "Portuguese");
    int num, a;
    do {
        cout << "diz um numero mano/a" << endl;
        cin >> num;
        cout << " A calcular o dobro do numero " << num << endl;
        a = num * 2;
        cout << "o dobro do numero e " << a << endl;
        cout << " dobro do numero encontrado" << endl;
        cout << " se Deseja sair usa o (s)? SE N DESEJAS SAIR CLICA EM QUALQUER TECLA QUE VC VAI CONTINUAR: " << endl;
        cin >> sair;
    } while (sair != 's');
    return 0;
}