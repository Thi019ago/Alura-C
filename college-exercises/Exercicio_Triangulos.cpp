#include <iostream>

using namespace std;

int main(){
	
	float a, b, c;
	int cont, tot;
	
	cout << "Digite o Total de triangulos\n";
	cin >> tot;
	
	for (cont=1;cont<=tot;cont++){
	
		cout << "Informe o valor de a: ";
		cin >> a;
		
		cout << "Informe o valor de b: ";
		cin >> b;
		
		cout << "Informe o valor de c: ";
		cin >> c;
		
		if((a<b+c) && (b<a+c) && (c<a+b)){
			if((a==b) && (b==c)){
				cout << "Triangulo equilatero\n";
			}
			else{
				if((a==b) || (a==c) || (c==b)){
					cout << "Triangulo Isoceles\n";
				}
				else{
					cout << "Triagulo escaleno\n";
				}
			}
			
		}
			else{
				cout << "Os dados nao formam um triangulo\n";
			}
	}
	
	system("pause");
	
	return 0;
}
