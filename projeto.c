#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <system.h>

int menuPrincipal(void) ;
void cadastrarGerente(void);
int cadastrarFunc(void);
int menuCadastro(void);
int logGerente(void) ;
int logFunc(void) ;
void menuLogin(void) ;
void menuGerent(void);
void menuFunc(void);
void cadAt(void);
int validaAtv (char *novaAt, char *tempo);

/* O nosso projeto trata de um software que visa
 dinamizar a gestão de Atividades de uma organização entre gerentes
  e funcionários. Contudo, apresentamos a nossa interface e telas de navegações. 
  Ressaltamos que para poder efetivar o login e cadastro, é necessário que o usuário digite 
  o login e senha iguais. Desenvolvedores: JOANDERSON NATANAEL E JEDSON PEREIRA */

int main(){
  

  int op;

  do {
    printf("\n");
    op = menuPrincipal();
    switch(op){
      case 1:
            menuCadastro();
            break;
      case 2:
            menuLogin();
            break;
      case 0:
            printf("Você está saindo do sistema...Xau;) ");
            break;
      default:
            printf("Você digitou uma opção inválida, tente novamente\n");
    }
  } while(op != 0);
}

int menuPrincipal(void) {
  int opcao;
  printf("\n");
  printf("------------------\n");
  printf("| Menu Principal |\n");
  printf("------------------\n");
  printf("[1] Realizar Cadastro \n");
  printf("[2] Login \n");
  printf("[0] Sair do sistema \n");
  printf("\nEscolha sua opção: ");
  scanf("%d", &opcao);
  return opcao;
}

void cadastrarGerente(void) {
  char login[20],nome[100],senha[20];
  printf("\n");
  printf("-----------------------\n");
  printf("|  Cadastrar Gerente  |\n");
  printf("-----------------------\n");
  printf("\nLogin: ");
  scanf(" %19[^\n]",login);       //Usuario coloca a o Login
  printf("\nSenha: ");
  scanf(" %19[^\n]",senha);       // Senha do usuario
  printf("\nNome Completo: ");
  scanf(" %99[^\n]",nome);
}

int cadastrarFunc(void) {
  char login[20],nome[100],senha[20];
  printf("\n");
  printf("-------------------------\n");
  printf("| Cadastrar funcionário |\n");
  printf("-------------------------\n");
  printf("Login: ");
  scanf(" %19[^\n]",login);
  printf("Senha:  ");
  scanf(" %19[^\n]",senha);
  printf("Nome Completo: ");
  scanf(" %99[^\n]",nome);
  return 1;
}
int menuCadastro(void) {
  int opcao;
  printf("\n");
  printf("---------------------\n");
  printf("| Menu de Cadastros |\n");
  printf("---------------------\n");

  printf("[1] Cadastro Gerente \n");
  printf("[2] Cadastro Funcionário\n");
  printf("[0] Voltar\n");
  printf("\nEscolha sua opcao: ");
  scanf("%d", &opcao);
  switch (opcao){
    case 1:
          cadastrarGerente();
          break;
    case 2:
          cadastrarFunc();
          break;
    default:
          printf("Você digitou uma opção inválida! Tente novamente! ");
  }
  return 1;
}
int logGerente(void) {
  do{
    char senha[20];
    char login[20];
    printf("\n");
    printf("-----------------\n");
    printf("| Login Gerente |\n");
    printf("-----------------\n");
    printf("Login: ");
    scanf(" %s19[^\n]",login);
    printf("Senha: ");
    scanf(" %s19[^\n]",senha);
    
    if (strcmp (login, senha) == 0){                //O login tem que Ser igual a senha 
          printf("\nLogin Realizado com Sucesso\n");
          break;
      }
    else{
            printf("Login Incorreto.\n");
    }
  }
  while(1);
  return 1;
}

int logFunc(void) {
  char senha[20];
  char login[20];
  do {
  printf("\n");
  printf("---------------------\n");
  printf("| Login Funcionário |\n");
  printf("---------------------\n");
  printf("Login: ");
  scanf(" %s19[^\n]",login);
  printf("Senha: ");
  scanf(" %s19[^\n]",senha);
  
    if (strcmp (login, senha) == 0){
      printf("\nLogin Realizado com Sucesso\n");
      break;
    }
    else{
      printf("Login Incorreto.\n");
    }
  }
  while (1);
  return 1;
}

void menuLogin(void) {
  int opcao;

  do {
    printf("\n");
    printf("[1] Login Gerente \n");
    printf("[2] Login Funcionário \n");
    printf("[0] Voltar \n");
    printf("Escolha sua opção: ");
    scanf("%d", &opcao);
    switch(opcao){
      case 1:
            if(logGerente()){
		        menuGerent();
          }
            else{
	           exit(1);		
          }
            break;
      case 2:
            if(logFunc()){
		        menuFunc();	
          }
            else{
		        exit(1);
          }
            break;
      case 0:
            printf("Saindo da opção de Login ...");
            break;
    default:
            printf("Você escolheu uma opção errada ...");
    }
  }
  while (opcao != 0);
}

void menuGerent(void){
  int opcao;
  printf("\n");
  printf("-------------------\n");
  printf("| Menu do Gerente |\n");
  printf("-------------------\n");
  do {

    printf("\n[1] Cadastrar Nova Atividades \n");
    printf("[2] Alterar Atividades \n");
    printf("[3] Excluir Atividades \n");
    printf("[4] Exibir Relatorios de Atividades \n");
    printf("[0] Sair \n");
    printf("Escolha sua opção: ");
    scanf("%d", &opcao);
    switch(opcao){
      case 1:
            cadAt();          
            break;
      case 2:
            printf("\nSem atividades Cadastradas\n");
            break;
      case 3:
            printf("\nSem atividades Cadastradas\n");
            break;
      case 4:
            printf("\nAinda não temos relatorios\n");
            break;
      case 0:
            printf("\n");
            break;
      default:
            printf("Opção inválida!");
    }
  }
  while (opcao != 0);
}

void menuFunc(void){
  int opcao;
  printf("\n");
  printf("-----------------------\n");
  printf("| Menu do Funcionário |\n");
  printf("-----------------------\n");
  do {

    printf("\n[1] Exibir Relatorios \n");
    printf("[2] Alterar Status de Atividades \n");
    printf("[0] Sair \n");
    printf("Escolha sua opção: ");
    scanf("%d", &opcao);
    switch(opcao){
      case 1:
            printf("\nSem atividades Cadastradas\n");       
            break;
      case 2:
            printf("\nSem atividades Cadastradas\n");
            break;
      case 0:
            printf("\n");
            break;
      default:
            printf("Opção inválida!");
    }
  }
  while (opcao != 0);
}

void cadAt(void) {
  char novaAt[99]; 
  char tempo[9];

  printf("\n");

  printf("--------------------------\n");
  printf("| Cadastro de Atividades |\n");
  printf("--------------------------\n");
  do{
    printf("Digite o nome da Atividade:\n");
    scanf(" %98[^\n]", novaAt);

    printf("\nDetermine o tempo para execução:\n");
    scanf(" %8[^\n]", tempo);
  }
  while (validaAtv(novaAt, tempo) > 0 ) ;
  printf("\nTarefa cadastrada com sucesso!\n");  
}

int validaAtv (char *novaAt, char *tempo) {
  int valid = 0; 
  if ((strcmp(novaAt, ""))==0) {
    printf("Você não especificou a atividade!\n");
    valid ++;
  }
  if ((strcmp(tempo, ""))==0){
    printf("\nVocê não determinou o prazo para a realização da atividade!\n");
    valid++;
  }
  return valid;
}
