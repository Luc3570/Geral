#include<iostream>
using namespace std;

//4. Ler 5 n�meros e informar o menor e o maior.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int i;
	int maior;
	int menor;
	
	cout<<"Insira um n�mero: ";
	cin>>numero;
	maior = numero;
	menor = numero;
	
	for(i = 0; i < 4; i++)
	{
		cout<<"Insira um n�mero: ";
		cin>>numero;
		
		if(numero>maior)
		{
			maior = numero;
		}
		if(numero<menor)
		{
			menor = numero;
		}
	}
	
	cout<<"O menor n�mero digitado foi: "<<menor<<" e o maior foi: "<<maior;
}
