#include <iostream>
#include <cctype>
#include <locale>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");    
    int opcao;
    char repetir;

    do 
    {
        cout << " MENU PRINCIPAL \n1 - Verificar se número é positivo, negativo ou zero\n2 - Classificar nota\n3 - Verificar se letra é vogal ou consoante\n4 - Comparar dois números\n5 - Sair\nEscolha uma opção: ";
        cin >> opcao;

        if (opcao == 1) {
            int num;
            cout << "Digite um número:\033[4m ";
            cin >> num;
            
            if (num > 0) {
                cout << "O número é positivo."<<endl;
            }
            else if (num < 0) {
                cout << "O número é negativo."<<endl;
            }
            else {
                cout << "O número é zero."<<endl;
            }
        }
        else if (opcao == 2) {
            int nota= 100;
            cout << "Digite a nota (0 a 100): " << endl;
            cin >> nota;

            if (nota >= 90) {
                cout << "Classificação: A"<<endl;
            }
            else if (nota >= 70) {
                cout << "Classificação: B"<<endl;
            }
            else if (nota >= 50) {
                cout << "Classificação: C"<<endl;
            }
            else {
                cout << "Classificação: D"<<endl;
            }
        }
        else if (opcao == 3) {
            char letra;
            cout << "Digite uma letra!: " << endl;
            cin >> letra;

            letra = tolower(letra);

            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') 
            {
                cout << "É uma vogal.\n";
            }
            else {
                cout << "É uma consoante"<<endl;
            }
        }
        else if (opcao == 4)
        {
            int a, b;
            cout << "Digite o primeiro número: ";
            cin >> a;
            cout << "Digite o segundo número: ";
            cin >> b;

            if (a > b) {
                cout << a << " é maior que " << b << endl;
            }
            else if (a < b) {
                cout << a << " é menor que " << b << endl;
            }
            else {
                cout << "Os dois números são iguais."<<endl;
            }
        }
        else if (opcao == 5) {
            cout << "finalmente sai do programa!"<<endl;
            break;
        }
        else {
            cout << "Opção errada!"<<endl;
        }

        cout << "Deseja repetir o menu? (Sim(s),Não(n)): "<<endl;
        cin >> repetir;

		repetir = tolower(repetir); // Convertendo para minúscula para facilitar a comparação pra n esquecer

       

    } while (repetir == 's');

    return 0;
}

