#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
    int matriz[5][3] = { {1, 2,3}, {4,5,6},{7,8,9 },{10,11,12},{13,14,15};
	int soma;
	for (int i; i < 5; i++)
		soma=0;
	for (int j; j < 3; j++)
		soma += matriz[i][j];



 
	

return 0;
} 
    
   




