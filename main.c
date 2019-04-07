#include <stdio.h>
#include <locale.h>
#include <string.h>

int menuPrincipal(void) {
  int opcao;
  printf("\n");
  printf("------------------\n");
  printf("| Menu Principal |\n");
  printf("------------------\n");
  printf("[1] Realizar Cadastro \n");
  printf("[2] Login Gerente \n");
  printf("[3] Login Funcionario \n");
  printf("[0] Sair do sistema \n");
  printf("Escolha sua opção: ");
  scanf("%d", &opcao);
  return opcao;
}

void cadastrarGerente(void) {
  char login[20],nome[100],senha[20];
  printf("\n");
  printf("-----------------------\n");
  printf("|  Cadastrar Gerente  |\n");
  printf("-----------------------\n");
  printf("\nLogin: \n");
  scanf(" %19[^\n]",login);
  printf("\nSenha:  \n");
  scanf(" %19[^\n]",senha);
  printf("\nNome Completo: \n");
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
  printf("[0] Voltar \n");
  printf("\nEscolha sua opcao: \n");
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
    
    if (strcmp (login, senha) == 0){
        printf("\nLogin Realizado com Sucesso\n");
        break;
      }
      else{
        printf("Login Incorreto.\n");
    }
  }
  while(1);
  return 1
}

void logFunc(void) {
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
            logGerente();
            break;
      case 2:
            logFunc();
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
            //cadAt();  //Função Criada, mas não executada          
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

int cadAt(void) {
  char novaAt[99]; 
  char tempo[9];

  printf("\n");

  printf("--------------------------\n");
  printf("| Cadastro de Atividades |\n");
  printf("--------------------------\n");

  printf("Digite o nome da Atividade:\n");
  scanf("%d", &novaAt);
  printf("\nDetermine o tempo para execução:\n");
  scanf("%d", &tempo);
}



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
            logGerente();
            break;
      case 3:
            logFunc();
            break;
      case 0:
            printf("Você está saindo do sistema...Xau;) ");
            break;
      default:
            printf("Você digitou uma opção inválida, tente novamente\n");
    }
  } while(op != 0);
}