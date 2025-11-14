#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    char sair = 'N';
    string materia[5] = { "Portugues", "Ingles", "Historia", "Matematica", "Geografia" };

    do {
        cout << "Qual numero de materia tu queres? (0 a 4)\n";
        cin >> num;

        if (num >= 0 && num < 5) {
            cout << "A materia semelhante a " << num << " e " << materia[num] << endl;
        }
        else {
            cout << "Numero invalido! Digite entre 0 e 4.\n";
        }

        cout << "Deseja continuar? (S/N): ";
        cin >> sair;

    } while (sair == 'S' || sair == 'S');

    return 0;
}
