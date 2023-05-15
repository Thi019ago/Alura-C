#include <iostream>

using namespace std;

int main(){
	
	int numero, tot, cont;	
	
	cout << "Digite o Total de dias da semana\n";
	cin >> tot;
	
	for (cont=1; cont<=tot; cont++){
	
	cout << "Informe um numero de 1 a 7:\n";
	cin >> numero;
	
	switch(numero){
		case 1: cout <<"Domingo\n";
		break;
		case 2: cout <<"Segunda\n";
		break;
		case 3: cout <<"Terca\n";
		break;
		case 4: cout <<"Quarta\n";
		break;
		case 5: cout <<"Quinta\n";
		break;
		case 6: cout <<"Sexta\n";
		break;
		case 7: cout <<"Sabado\n";
		break;
		default: cout << "Digitou outra coisa!\n";
	}
}
	
	system("pause");
	return 0;
}
