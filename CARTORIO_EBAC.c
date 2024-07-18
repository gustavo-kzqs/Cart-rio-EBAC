#include <stdio.h> //BIBLIOTECA DE COMUNICAÇÃO COM O USUÁRIO 
#include <stdlib.h> // ALOCAÇÃO DE ESPAÇO DE MEMÓRIA 
#include <locale.h> // BIBLIOTECA DE ALOCAÇÃO DE TEXTO POR REGIÃO
#include <string.h> // BIBLIOTECA RESPONSAVEL POR DAR VIDA AS STRING// STRING= SEQUENCIA DE CARACTERES

int registro() //CADASTRA USUARIOS
{
	//INICIO DA CRIAÇÃO DE VARIAVEIS(STRING)
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //COLETA INFORMAÇÃO DO USUARIO
	scanf("%s",cpf); //%s SALVA STRING
	
	
	strcpy(arquivo, cpf); // COPIA VALORES DAS STRING
	
	FILE *file; // CRIA O ARQUIVO 
	file = fopen(arquivo,"w"); // CRIA O ARQUIVO
	fprintf(file,cpf); // SALVA O VALOR DA VARIAVEL
	fclose(file); // FECHA O ARQUIVO
	
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file=fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file=fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file=fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");	
	
}
int consulta()
{
	setlocale(LC_ALL,"Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); 
	
	if(file==NULL)
	{
		printf("Não foi possível abrir o arquivo, não localizado!\n.");
	}
	
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\n Essas são as informações do usúario: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
	    system("pause");

}
int deletar()
{
       char cpf[40];
       
       printf("Digite o CPF do usuário a ser deletado: ");
       scanf("%s", cpf);
       
       remove(cpf);
       
       FILE*file;
       file = fopen(cpf, "r");
       
       if(file == NULL)
       {
       	printf("Usuário não encontrado no sistema!.\n");
	    system("pause");
	    
	   }
       
}

int main()
{
   int opcao=0; //Definindo variaveis 
   int laco=1;
  
   for(laco=1;laco=1;)
   {
      system("cls");
  
    setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
   
    printf("### Cártorio da EBAC ###\n\n"); // Inicio do menu
    printf(" Escolha a opção desejada no menu:\n\n");
    printf("\t1 - Registrar nomes de usuário\n\n");
    printf("\t2 - Consultar nomes de usuário\n\n");
    printf("\t3 - Deletar usuário\n\n");	
    printf("Opção: ");// Fim do menu
   
    scanf("%d", &opcao); // Armazenando opçao de usuario 
    system("cls"); // LIMPA A TELA

    switch(opcao) //INICIO DE SELEÇÃO DO MENU
    {
    	case 1:
    		registro(); // CHAMADA DE FUNÇÕES 
            break;
            
        case 2:    
             consulta();
		     break;
		     
		case 3:     
	       	 deletar();
      	     break;
      	     
      	
        default:
      	     printf("Essa opção não está disponivel!\n");
		     system("pause");
		     break;
	}
   
     
	  }
     }
 
	  
  
     
   
