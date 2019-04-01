#include <stdio.h>
#include <locale.h>

int menuPrincipal(void) {
  int opcao;
  printf("\n");
<<<<<<< HEAD
  printf("------------------\n");
  printf("| Menu Principal |\n");
  printf("------------------\n");
  printf("[1] Realizar Cadastro \n");
  printf("[2] Realizar Login \n");
  printf("[3] Exibir Relatórios \n");
  printf("[0] Sair do sistema \n");
  printf("Escolha sua opção: ");
=======
	printf("1 -> Realizar Cadastro \n");
	printf("2 -> Realizar Login \n");
	printf("0 -> Sair do sistema \n");
	printf("Escolha sua opção: ");
>>>>>>> 9780aa9acbed21f7df59dd1dfcac7ab898190d82
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
<<<<<<< HEAD
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
=======
	printf("1 -> Cadastro Gerente \n");
	printf("2 -> Cadastro Funcionário \n");
	printf("0 -> Voltar \n");
	printf("Escolha sua opção: \n");
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
>>>>>>> 9780aa9acbed21f7df59dd1dfcac7ab898190d82
  }
  return 1;
}

<<<<<<< HEAD
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
=======
void logGerente() {

  char senha[20];
  char login[20];
  printf("\n");
	printf("--> Login Gerente <-- \n");
	printf("Login: ");
	scanf(" %s19[^\n]",login);
	printf("Senha:  ");
	scanf(" %s19[^\n]",senha);

}

int logFunc(void) {
  char senha[20];
  char login[20];
  printf("\n");
	printf("--> Login Funcionários <-- \n");
	printf("Login: ");
	scanf(" %s19[^\n]",login);
	printf("Senha: ");
	scanf(" %s19[^\n]",senha);
  return 1;
>>>>>>> 9780aa9acbed21f7df59dd1dfcac7ab898190d82
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
<<<<<<< HEAD
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
=======
        logGerente();
        break;
      case 2:
        logFunc();
        break;
      case 0:
        printf("Saindo da opção de Login ...");
	   default:
	   printf("Você escolheu uma opção errada ...");
>>>>>>> 9780aa9acbed21f7df59dd1dfcac7ab898190d82
    }
  }
  while (opcao != 0);

}

<<<<<<< HEAD
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
=======
void menuGerente(){
  int opcao;
  do {
    printf("---> Menu de tarefas <---\n");
    printf("1 -> Cadastrar \n");
    printf("2 -> Alterar\n");
    printf("3 -> Excluir\n");
    printf("4 -> Relatórios\n");
    printf("0 -> Voltar\n");
    printf("Escolha uma opção \n");
    scanf("%d", &opcao);


  switch(opcao){
    case 1:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 2:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 3:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 4:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 0:
      printf("Você está saindo... \n");
      break;
    default:
      printf("Você digitou uma opção errada!! Tente novamente !!\n");
    }
  }while(opcao != 0);
}

void menuFunc(){
  int opcao;
  do {
    printf("---> Menu de tarefas <---\n");
    printf("1 -> Projetos em Aberto\n");
    printf("2 -> Projetos em Andamento\n");
    printf("3 -> Projetos Concluídos\n");
    printf("0 -> Voltar\n");
    printf("Escolha uma opção \n");
    scanf("%d", &opcao);

  switch(opcao){
    case 1:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 2:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 3:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 4:
      printf("Fazer somente na parte de gravar arquivos\n");
      break;
    case 0:
      printf("Você está saindo... \n");
      break;
    default:
      printf("Você digitou uma opção errada!! Tente novamente !!\n");
    }
  }while(opcao != 0);
>>>>>>> 9780aa9acbed21f7df59dd1dfcac7ab898190d82
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
<<<<<<< HEAD
            menuLogin();
            break;
      case 3:
            menuRelat();
            break;
=======
		menuLogin();
		break;
>>>>>>> 9780aa9acbed21f7df59dd1dfcac7ab898190d82
      case 0:
            printf("Você está saindo do sistema...Xau;) ");
            break;
      default:
            printf("Você digitou uma opção inválida, tente novamente\n");
    }
  } while(op != 0);
} 