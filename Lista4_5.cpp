#include<iostream>
using namespace std;

//5. Fa�a um programa em que o usu�rio digite 2 valores e se a soma deles for maior que 15 o programa encerra, caso contr�rio, repete.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor1, valor2;
	int soma;
	int i;
	
	while(true)
	{
		cout<<"Insira um n�mero: ";
		cin>>valor1;
		
		cout<<"Insira outro n�mero: ";
		cin>>valor2;
		
		soma = valor1 + valor2;
		
		if(soma > 15)
		{
			break;
		}
	}
	
}
