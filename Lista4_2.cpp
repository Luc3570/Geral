#include<iostream>
using namespace std;

//2. Ler 5 n�meros e informar quantos desses eram �mpares.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int i;
	int result = 0;
	
	for(i = 0; i<5; i++)
	{
		cout<<"Insira um n�mero: ";
		cin>>numero;
		
	    if (numero % 2 != 0)
	    {
		 result++;
	    } 
	
	}
	
	cout<<"O total de n�meros que eram �mpares �: "<< result;
}
