# include <iostream>
using namespace std;
#define linha cout << ".................................................\n";
int main()
{
	string nome, part = ""; // variaveis nome do eleitor e partirdo
	int can_um = 0,can_do = 0,can_tr = 0,can_qu = 0,can_ci = 0,n_b = 0,ind = 0; // recepi��o dos votos executados
	int voto = 1; // variavel recebe numero do candidato
	bool sair = false;
	while (sair != true)
	{
		system("cls");
		string ops;
		voto = 0;
		// Inicio do cadastro. 
		cout << " Nome: ";
		cin >> nome;
		
		if (nome == "")
		{
			while(nome != "")
			{
				cout << " Nome: ";
				cin >> nome;	
			}
		}
		linha
		cout << " Partido: ";
		cin >> part;
		
		if (part == "")
		{
			while(part != "")
			{
				cout << " Partido: ";
				cin >> part;	
			}	
		}
		linha
		
		cout << " Menu de Opcoes:\n";
		linha
		
		cout << " 1 ate 5 - Votos validos para candidatos.\n";
		cout << "\n";
		cout << " 6 - Voto valido como indeciso.\n";
		cout << "\n";
		cout << " 7 - Voto valido como nulo ou branco.\n";
		linha
		linha 
		
		cout << " Numero do candidato em que votara: ";
		cin >> voto;
		linha
		
		// Efetiva��o da variavel voto
		while ( voto > 7)
		{
			system("cls");
			
			cout << " !!! ... ERRO ... !!! \n";
			linha
			
			cout << " 1 ate 5 - Votos validos para candidatos.\n";
			cout << "\n";
			cout << " 6 - Voto valido como indeciso.\n";
			cout << "\n";
			cout << " 7 - Voto valido como nulo ou branco.\n";
			linha
			linha 
			
			cout << " Numero do candidato em que votara: ";
			cin >> voto;
			linha
		}// Fim de Efetiva��o // Final do cadastro.
		// Apura��o do resultado.
		if (voto == 1)
		{
			can_um += 1;
		}
		else if (voto == 2)
		{
			can_do += 1;
		}
		else if (voto == 3)
		{
			can_tr += 1;
		}
		else if (voto == 4)
		{
			can_qu += 1;
		}
		else if (voto == 5)
		{
			can_ci += 1;
		}
		else if (voto == 6)
		{
			ind += 1;
		}
		else if (voto == 7)
		{
			n_b += 1;
		}
		cout << "Novo voto: [S/N] ";
		cin >> ops;
		
		if(ops == "s" or ops == "S")
		{
			sair = false;
		}
		else{
			sair = true;
		}
	}// Fim de Apura��o.	
	// Incio da Analize de dados 
	system("cls");
	int total = can_um + can_do + can_tr + can_qu + can_ci + ind + n_b;
	// porcentagem de aprova��o e rejei��o
	for(int i = 1; i < 6; i++)
	{
		int porcem_a = 0, porcem_r = 0;
		
		if (i == 1)
		{
			porcem_a = can_um * 100 / total;
			porcem_r = 100 - porcem_a;
		}
		else if (i == 2)
		{
			porcem_a = can_do * 100 / total;
			porcem_r = 100 - porcem_a;
		}
		else if (i == 3)
		{
			porcem_a = can_tr * 100 / total;
			porcem_r = 100 - porcem_a;
		}
		else if (i == 4)
		{
			porcem_a = can_qu * 100 / total;
			porcem_r = 100 - porcem_a;
		}
		else if (i == 5)
		{
			porcem_a = can_ci * 100 / total;
			porcem_r = 100 - porcem_a;
		}
		cout << " O candidato"<<i<<" teve: \n";
		cout <<" "<<porcem_a<<"% de aceitacao e "<<porcem_r<<"% de rejeicao \n";
		linha
	}
	int porcem_nb = (n_b * 100)/ total;
	int porcem_in = (ind * 100)/ total;	
	
	cout <<" Tivemos "<<porcem_nb<<"% de votos nulo e brancos\n";
	cout <<" "<<porcem_in<<"% estavao idecisos";
	
	return 0;
}
