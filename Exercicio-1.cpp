#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	
	float a, b, c;
	
	cout << "Insira o primeiro numero\n";
	cin >> a;
	cout << "Insira o segundo numero\n";
	cin >> b;
	cout << "Insira o terceiro numero\n";
	cin >> c;
	
	if (a > b and a > c){
		cout << "O maior numero e " <<a<<"\n";
	}
	else if(b > a and b > c){
		cout << "O maior numero e "<<b<<"\n";
	}
	else{
	cout << "O maior numero e " <<c<<"\n";
	}
	
	if (a < b and a < c){
		cout << "O menor numero e " <<a<<"\n";
	}
	else if(b < a and b < c){
		cout << "O menor numero e "<<b<<"\n";
	}
	else{
	cout << "O menor numero e " <<c<<"\n";
	}
	
	
	system("pause");
	 return 0;
}
