#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o Vari�veis
	
	string nom;
	int opcao, idd, pos;
	
	string nome[10];
	int idade[10];
	int posicao[10];

	
	while (true){
	cout << "Menu Principal" << endl;
	cout << "Escolha uma Op��o Abaixo: " << endl;
	
	cout << "1 - Cadastrar novo Aluno" << endl;
	cout << "2 - Procurar Aluno" << endl;
	cout << "3 - Sair do Sistema" << endl;
	cin >> opcao;
	
	switch (opcao)
	{
	
		case 1:
			
			cout << "Voc� selecionou cadastrar aluno" << endl;
			cout << "Digite abaixo o nome do aluno: " << endl;
			cin >> nom;
			cout << "Digite a Idade do Aluno" << endl;
			cin >> idd;
			cout << "Digite a posi��o que ele ir� ocupar" << endl;
			cin >> pos;
			
			nome[pos] = nom;
			idade[idd] = idd;
			posicao[pos] = pos;
			
			break;
		
		case 2:
			
			cout << "Informe a Posi��o do Aluno" << endl;
			cin >> pos;
			
			if (pos == posicao[pos])
			{
				cout << "Posi��o encontrada!" << endl;
				cout << "Aluno " << nome[pos] << " Possui " << idade[idd] << " anos de idade." << endl;
			}
			else
			{
				cout << "Cadastro n�o encontrado" << endl;	
			}
			
			break;	
		}
	}
	
	return 0;
}
