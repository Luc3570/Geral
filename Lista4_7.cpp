#include<iostream>
using namespace std;

//7. Fa�a um programa que receba um n�mero e que calcule e mostre a tabuada desse n�mero.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int i;
	int tab = 1;
	
	cout<<"Insira o n�mero que deseja a tabuada: ";
	cin>>numero;
	
	for(i = 0; i<10 ; i++)
	{
		cout << " \n " << numero << " x "<< tab << " : " << (numero * tab);
		tab++;
	}

}
