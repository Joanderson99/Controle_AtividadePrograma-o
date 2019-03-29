#include <stdio.h>
#include <locale.h>

int menuPrincipal(void) {
  int opcao;
  printf("\n");
	printf("1 -> Realizar Cadastro \n");
	printf("2 -> Realizar Login \n");
	printf("3 -> Exibir Relatórios \n");
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
	scanf(" 99[^\n]",nome);
 
  
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
	printf("1 -> Cadastro Gerente ");
	printf("2 -> Cadastro Funcionário ");
	printf("0 -> Voltar ");
	printf("Escolha sua opção: ");
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

void logFunc() {
  char senha[20];
  char login[20];
  printf("\n");
	printf("--> Login Funcionários <-- \n");
	printf("Login: ");
	scanf(" %s19[^\n]",login);
	printf("Senha: ");
	scanf(" %s19[^\n]",senha);
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


void menuRelat(){
  printf("---> Menu de Relatórios <--- /n");
  printf("1 -> Relatórios Gerente \n");
  printf("2 -> Relatórios Funcionários \n");
  printf("3 -> Atividades em Andamento \n");
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
      case 3:
		menuRelat();
		break;
      case 0:
		printf("Você está saindo do sistema...");
		break;
      default:
		printf("Você digitou uma opção inválida, tente novamente");
      }
  } while(op != 0);
   
}