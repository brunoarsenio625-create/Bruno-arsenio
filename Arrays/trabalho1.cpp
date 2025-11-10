#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	float num;
		cout << "me da o numero";
	cin >> num;
	if (num > 10)
	{
		cout << "este numero é negativo!";
	}
else
	{
	cout << "este numero é positivo";
    }
} 

