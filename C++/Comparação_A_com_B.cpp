#include <iostream>
#include <locale.h>
using namespace std;
// Thiago Soares Albuquerque 202303404336
// Rafel modelli, João W, Raphael Cuba 
int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;

	cout << "Digite o valor de A\n";
	cin >> a;
	cout << "Digite o valor de B\n";
	cin >> b;

	cout << "O valor de A é " <<a<<", e o valor de B é "<<b<<"\n";
	cout << "Para substituir A com B, digite '1', e para substituir B com A, digite '2'\n";
	cin >> c;
	
	while(c!=1 and c!=2){
		cout << "Por Favor insira o numero '1' ou o numero '2'\n";
		cin >> c;
	}
	
	if (c==1){
		b=a;
		cout << a << "\n";
	}
	
	else{
		a=b;
		cout << b << "\n";
	}
	
	system ("pause");
	return 0;
}
