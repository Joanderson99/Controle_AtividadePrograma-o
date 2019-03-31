#include <stdio.h>
#include <locale.h>

int menuPrincipal(void) {
  int opcao;
  printf("\n");
	printf("1 -> Realizar Cadastro \n");
	printf("2 -> Realizar Login \n");
	printf("0 -> Sair do sistema \n");
	printf("Escolha sua opção: ");
  scanf("%d", &opcao);
	return opcao;
}

void cadastrarGerente() {
  char login[20],nome[100],senha[20];
  printf("\n");
	printf("--> Cadastrar Gerente <-- \n");
	printf("Login: \n");
	scanf(" %19[^\n]",login);
	printf("Senha:  \n");
	scanf(" %19[^\n]",senha);
	printf("Nome Completo: \n");
	scanf(" %99[^\n]",nome);
 
  
}

int cadastrarFunc(void) {
  char login[20],nome[100],senha[20];
  printf("\n");
	printf("--> Cadastrar funcionário <-- \n");
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
  }
  return 1;
}

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
}

void menuLogin(void) {
  int opcao;
  
  do {
    printf("\n");
    printf("1 -> Login Gerente \n");
    printf("2 -> Login Funcionário \n");
    printf("0 -> Voltar \n");
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
	   default:
	   printf("Você escolheu uma opção errada ...");
    }
  }while (opcao != 0);

}

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
}

int main(){
	setlocale( LC_ALL, "pt - BR" );  

	int op;
 
  do {
   op = menuPrincipal();
  switch(op){
      case 1:
		menuCadastro();
		break;
      case 2:
		menuLogin();
		break;
      case 0:
		printf("Você está saindo do sistema...");
		break;
      default:
		printf("Você digitou uma opção inválida, tente novamente");
      }
  } while(op != 0);
   
}