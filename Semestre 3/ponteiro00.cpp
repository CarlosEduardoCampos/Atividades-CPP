#include <iostream>
using namespace std;
//
struct celula
{
	string nome;
	int idade;
	celula *nex;
};
// Recebe uma idade e devolve int
int recebeIdade()
{
	int idade;
	//
	cout <<" Idade: ";
	cin >> idade;
	//
	return idade;
}
// Recebe um nome e devolve uma string
string recebeNome()
{
	string nome;
	//
	cout <<"\n Nome: ";
	cin >> nome;
	//
	return nome;
}
// Fun��o que acresenta mais uma celula(pessoa) a lista no incio
celula *inserirNoInicio(celula *lista, int idade, string nome)
{
	celula *nova = new celula;
	nova->nome = nome;
	nova->idade = idade;
	nova->nex = lista;
	lista = nova;
	return lista;
}
// Fun��o que acresenta mais uma celula(pesssoa) a lista no fim
celula *inserirNoFim(celula *lista, int idade, string nome)
{
	celula *nova = new celula;
	nova->nome = nome;
	nova->idade = idade;
	nova->nex = NULL;
	//
	if(lista != NULL)
	{
		celula *aux = lista;//primeiro dos ponteiros(inicio da lista)
		//
		while(aux->nex != NULL)
		{
			aux = aux->nex;
		}
		aux->nex = nova;

		return lista;
	}else
	{
		cout <<" Sua lista estava vazia e foi adicionado novos dados! \n";
		return nova;
	}
}
// Mostra na tela nomes cadastrados nos endere�os de memoria
void imprimirLista(celula *lista)
{
	if(lista != NULL)
	{
		cout <<"\n..........................................\n\n";
		celula *aux = lista;
		while(aux != NULL)
		{
			cout<<" "<< aux->nome << endl;
			aux = aux -> nex;
		}
		cout <<"\n..........................................\n";
	}else
	{
		cout <<" Sua lista estava vazia \n";
	}
}
// fun��o que exclui uma celula(pessoa)
celula *removaItem(celula *lista)
{
	cout << " Excluir: ";
	string nome = recebeNome();// recebe nome da pessoa que vai escluir
	//
	celula *aux = lista; // posi��o atualdo pponteiro
	celula *ant = NULL;// posi��o anterior do ponteiro
	//
	bool acho = false;
	while(aux != NULL)
	{
		if(aux->nome == nome)// Teste de igualdade entre nome na celuala e nome recebido
		{
			acho = true;
			break;// pausa na execu��o do while
		}
		ant = aux;// antiga posi��o
		aux = aux->nex;// nova posi��o
	}
	if(!acho)
	{
		cout << "\n Nome n�o encontrado!! \n";
	}
	// caso esteja no inicio
	if(ant == NULL)
	{
		lista = aux->nex;// lista recebe posi��o atual
	}
	// caso esteja removendo do meio ou fim 
	else{
		ant->nex = aux->nex;// anterior recebe ponteiro da proxima celula
	}
	delete aux;
	return lista;	
}
//
int main()
{
	celula *lista = NULL;
	//
	lista = inserirNoFim(lista,recebeIdade(), recebeNome());
	lista = inserirNoFim(lista,recebeIdade(), recebeNome());
	//
	imprimirLista(lista);
	//
	removaItem(lista);
	//
	imprimirLista(lista);
}