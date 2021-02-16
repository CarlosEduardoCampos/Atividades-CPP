#include <iostream>
#include<math.h>
#include <stdlib.h>
#include <locale>
using namespace std;
//
char menu();
int pot( int c, int d);
int SomaImpar( int n);
void troc(int &a, int &b);
//
int main()
{
	setlocale(LC_ALL,"portuguese");
	//
	char res;// Op��o do usuario.
	//
	do{
		res = menu();// Recebendo valor de resposta do user.
		if(res == '1')
		{
			int tot;
			//
			cout <<"\n >>> Exec�cio 1 <<< \n\n";
			int a,b;
			// recebendo base da potencia como a.
			cout <<" Valor da base: ";
			cin >> a;
			//recebendo expoente da potencia como b.
			cout <<" Valor do expoente: ";
			cin >> b;
			//
			tot = pot(a, b);//chamando fun��o.
			//
			cout <<" = "<<tot<<"\n\n";
			//
			system("pause");
			system("cls");// linpando a tela para novo teste.
		}
		else if( res == '2')
		{
			cout <<"\n >>> Exec�cio 2 <<< \n\n";
			//
			int n, a;
			//
			cout <<" Digite um numero: ";
			cin >> n;
			//
			if(n > 0)
			{
				a = SomaImpar(n);
				cout <<"\n A soma de todos os impares � "<<a<<"\n\n";
			}
			else
			{
				cout <<"\n N�mero n�o � positivo \n\n";
			}
			system("pause");
			system("cls");// linpando a tela para novo teste.
		}
		else if(res == 'x')
		{
			int a, b;
			//
			cout <<"\n Numero para A: ";
			cin >> a;
			//
			cout <<"\n Numero para B: ";
			cin >> b;
			//
			troc(a, b);
			//
			cout <<"\n A: "<<a<<"\t B: "<<b<<"\n\n";
			//
			system("pause");
			system("cls");// linpando a tela para novo teste.
		}
	}while(res != '0');
	return 0;
}
//
char menu()
{	
	char tep;// Variavel temporaria para resposta do usuario.
	// Menu de opi��es do usuario.
	cout <<" >>> ..... ..... ..... Menu ..... ..... ..... <<< \n";
	cout <<"\n\t 0 - Sair. \n";
	cout <<"\n\t 1 - Exerc�cio. \n";
	cout <<"\n\t 2 - Exerc�cio. \n";
	cout <<"\n\t x - Desafio. ";
	cout <<"\n >>> ..... ..... ..... .... ..... ..... ..... <<< \n";
	// Recebendo resposta do usuario.
	cout <<" Op��o: ";
	cin >> tep;
	//
	switch(tep)// Teste de existencia da op��o.
	{
		case '0':
			break;
		
		case '1':
		   	break;
		   
		case '2':
			break;
		
		case 'x':
			break;
		
		default:
			tep = menu();
			break;
	}
	return tep;// Valor a ser utilizado no programa principal.
}
//
int pot(int c, int d)
{	
	int tot;
	cout <<"\n\t";
	for(int i = 1; i <= d; i++)
	{
		if(i == d)
		{
			cout <<c;
		}
		else{
			cout<<c<<"*";
		}
		tot = pow(c, d);
	}
	return tot;
}
//
int SomaImpar(int n)
{
	int a = 0; //recebe soma dos impares
	//
	cout<<" Os numeros somados s�o: ";
	for(int i = n; i >= 0; i--)// contagem regresiva.
	{
		if((i % 2) != 0)// teste logico para negativos.
		{
			cout<<" "<<i<<" ";
			a = a + i;// soma os impares.
		}
	}
	return a;// retorno da soma.
}
void troc(int &a, int &b){
	a ^= b;
	b ^= a;
	a ^= b;
}

