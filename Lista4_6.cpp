#include<iostream>
using namespace std;

//6. Ler N n�meros e contar quantos s�o pares. O programa deve parar quando ler um m�ltiplo de 11.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int pares = 0;
	
	while(true)
	{
		cout<<"Insira um n�mero: ";
		cin>>numero;
		
		if(numero % 2 == 0)
		{
			pares++;
		}
		if(numero % 11 == 0)
		{
			break;
		}
	}
	
	cout<<"N�meros pares inseridos at� um m�ltiplo de onze ser digitado: "<<pares;
}
