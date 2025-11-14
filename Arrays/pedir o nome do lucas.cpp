#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string lucas, mano;
    cout << "Diz o nome do Lucas: " << endl;
    cin >> lucas; 

    cout << "tudo fixe " << lucas << "." << endl; 

    return 0;
}

	
	