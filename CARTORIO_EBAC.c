#include <stdio.h> //BIBLIOTECA DE COMUNICA��O COM O USU�RIO 
#include <stdlib.h> // ALOCA��O DE ESPA�O DE MEM�RIA 
#include <locale.h> // BIBLIOTECA DE ALOCA��O DE TEXTO POR REGI�O
#include <string.h> // BIBLIOTECA RESPONSAVEL POR DAR VIDA AS STRING// STRING= SEQUENCIA DE CARACTERES

int registro() //CADASTRA USUARIOS
{
	//INICIO DA CRIA��O DE VARIAVEIS(STRING)
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //COLETA INFORMA��O DO USUARIO
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
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!\n.");
	}
	
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\n Essas s�o as informa��es do us�ario: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
	    system("pause");

}
int deletar()
{
       char cpf[40];
       
       printf("Digite o CPF do usu�rio a ser deletado: ");
       scanf("%s", cpf);
       
       remove(cpf);
       
       FILE*file;
       file = fopen(cpf, "r");
       
       if(file == NULL)
       {
       	printf("Usu�rio n�o encontrado no sistema!.\n");
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
   
    printf("### C�rtorio da EBAC ###\n\n"); // Inicio do menu
    printf(" Escolha a op��o desejada no menu:\n\n");
    printf("\t1 - Registrar nomes de usu�rio\n\n");
    printf("\t2 - Consultar nomes de usu�rio\n\n");
    printf("\t3 - Deletar usu�rio\n\n");	
    printf("Op��o: ");// Fim do menu
   
    scanf("%d", &opcao); // Armazenando op�ao de usuario 
    system("cls"); // LIMPA A TELA

    switch(opcao) //INICIO DE SELE��O DO MENU
    {
    	case 1:
    		registro(); // CHAMADA DE FUN��ES 
            break;
            
        case 2:    
             consulta();
		     break;
		     
		case 3:     
	       	 deletar();
      	     break;
      	     
      	
        default:
      	     printf("Essa op��o n�o est� disponivel!\n");
		     system("pause");
		     break;
	}
   
     
	  }
     }
 
	  
  
     
   
