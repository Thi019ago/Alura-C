#include <iostream>
#include <locale.h>
using namespace std;
// Thiago Soares Albuquerque 202303404336
// Rafel modelli, João W, Raphael Cuba
int main() {
	setlocale(LC_ALL, "Portuguese");

	float a, b, media;
	
	cout << "Digite a primeira nota\n";
	cin >> a;
	
	cout << "Digite a segunda nota\n";
	cin >> b;
	
	media = (a + b) / 2;
	
	cout << "Sua media é: \n" << media;
	
	system("pause");	
	return 0;
}
