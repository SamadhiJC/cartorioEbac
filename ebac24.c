#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca d alocação de espaço em memória
#include <locale.h> //biblioteca d alocações d texto po região
#include <string.h>//biblioteca responsavel por cuidar da string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o cpf a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);// responsavel por copiar os valores das strings
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "w");//cria arquivo
	fprintf(file,cpf);//salvar o valor da variavel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado:");
	scanf("%s" ,cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	}
	
	int consulta()
	{
		setlocale(LC_ALL, "portuguese");
		
		char cpf[40];
		char conteudo[200];
		
		printf("digite o cpf a ser consultado: ");
		scanf("%s",cpf);
		
		FILE *file;
		file= fopen(cpf,"r");
		
		if(file==NULL)
	
	{
		printf("não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL)
	{
		printf("\nEssas são as informações do usuario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	printf("você escolheu deletar nomes!\n");
	system("pause");
}

int main()
{
	int opcao=0; //definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	printf("### cartório da EBAC ###\n\n"); //inicio do menu
	printf("Escolha a opção desejada do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - sair do sistema\n\n");
	printf("opção: ");//fim do menu
	
	scanf("%d" , &opcao); //armazenando a escolha do usuário
	
	system("cls");

	
		switch(opcao)
		{
	
		case 1:
		printf("você escolheu o registo de nomes!\n");
		system("pause");
		break;
		
		case 2:
		printf("você escolheu consultar os nomes!\n");
		system("pause");
		break;
		
		case 3:
		printf("você escolheu deletar nomes!\n");
		system("pause");
		break;

		case 4:
		printf("obrigado por utilizar o sistema!\n");
		return 0;
		break;
		
		default:
		printf("essa opção não está disponivel!\n");
		system("pause");
		break;
		}	
	}
	
}
