#include <stdio.h>
#include <locale.h>

int menuPrincipal(void) {
  int opcao;
  printf("\n");
  printf("------------------\n");
  printf("| Menu Principal |\n");
  printf("------------------\n");
  printf("[1] Realizar Cadastro \n");
  printf("[2] Realizar Login \n");
  printf("[3] Exibir Relatórios \n");
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
          printf("Você digitou uma opção inválida !! Tente novamente !! ");
  }
  return 1;
}

void logGerente(void) {
  char senha[20];
  char login[20];
  printf("\n");
  printf("-----------------\n");
  printf("| Login Gerente |\n");
  printf("-----------------\n");
  printf("Login: ");
  scanf(" %s19[^\n]",login);
  printf("Senha:  ");
  scanf(" %s19[^\n]",senha);
}

void logFunc(void) {
  char senha[20];
  char login[20];
  printf("\n");
  printf("---------------------\n");
  printf("| Login Funcionário |\n");
  printf("---------------------\n");
  printf("Login: ");
  scanf(" %s19[^\n]",login);
  printf("Senha: ");
  scanf(" %s19[^\n]",senha);
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

void menuRelat(void){
  int opcao;
  printf("----------------------\n");
  printf("| Menu de Relatórios |\n");
  printf("----------------------\n");
  do {
    printf("[1] Relatórios Gerente \n");
    printf("[2] Relatórios Funcionários \n");
    printf("[3] Atividades em Andamento \n");
    printf("[0] Voltar \n");
    printf("Escolha sua opção: ");
    scanf("%d", &opcao);
    switch(opcao){
      case 1:
            printf("Ainda não tem relatórios\n");
            break;
      case 2:
            printf("Ainda não tem relatórios\n");
            break;
      case 3:
            printf("Você não tem atividades em andamento\n");
            break;
      default:
            printf("Você escolheu uma opção errada ...");
    }
  }
  while (opcao != 0);
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
            menuLogin();
            break;
      case 3:
            menuRelat();
            break;
      case 0:
            printf("Você está saindo do sistema...Xau;) ");
            break;
      default:
            printf("Você digitou uma opção inválida, tente novamente\n");
    }
  } while(op != 0);
} 