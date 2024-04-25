#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca d aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca d aloca��es d texto po regi�o
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
		printf("n�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL)
	{
		printf("\nEssas s�o as informa��es do usuario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	printf("voc� escolheu deletar nomes!\n");
	system("pause");
}

int main()
{
	int opcao=0; //definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	printf("### cart�rio da EBAC ###\n\n"); //inicio do menu
	printf("Escolha a op��o desejada do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("op��o: ");//fim do menu
	
	scanf("%d" , &opcao); //armazenando a escolha do usu�rio
	
	system("cls");

	
		switch(opcao)
		{
	
		case 1:
		printf("voc� escolheu o registo de nomes!\n");
		system("pause");
		break;
		
		case 2:
		printf("voc� escolheu consultar os nomes!\n");
		system("pause");
		break;
		
		case 3:
		printf("voc� escolheu deletar nomes!\n");
		system("pause");
		break;
		
		default:
		printf("essa op��o n�o est� disponivel!\n");
		system("pause");
		break;
		}	
	}
	
}
