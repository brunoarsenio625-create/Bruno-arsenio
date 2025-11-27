#include<iostream>
#include<locale.h>
using namespace std;
int main() 
{		
setlocale(LC_ALL, "Portuguese");
int a, b,div;
cin >> a;
cin >> b;
div = a / b;
cout << div << endl;
return 0;
}