#include <iostream>
#include <cctype>   // Para a função tolower
using namespace std;

int main() {
    char opcao;

    cout << "Digite uma letra (S ou N): ";
    cin >> opcao;
	
	opcao = tolower(opcao);// Converte para minúsculo

    if (opcao == 's') {
		cout << "Você digitou S (maiúsculo ou minúsculo)!" << endl;// Corrigido para minúsculo
    }
    else if (opcao == 'n') {
		cout << "Você digitou N (maiúsculo ou minúsculo)!" << endl;// Corrigido para minúsculo
    }
    else {
		cout << "Você digitou outra coisa." << endl;// Mensagem para qualquer outra entrada
    }

    return 0;
}
