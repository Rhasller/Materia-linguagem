#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	/*
	int menu;
	
	printf("++ Menu de escolhas ++ \n");
	printf("1 - Bom dia \n");
	printf("2 - Boa tarde \n");
	printf("3 - Boa noite \n");
	printf("4 - Bem vindo \n");
	printf("5 - Volte sempre! \n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			printf("1 - Esta de dia? \n");
		break;
		
		case 2:
			printf("2 - Esta de tarde? \n");
		break;
		
		case 3:
			printf("3 - Esta de noite? \n");
		break;
		
		case 4:
			printf("4 - Esta sendo bem atendido? \n");
		break;
		
		case 5:
			printf("5 - Vai voltar o imundo? \n");
		break;
		
		default:
			printf("Escolha a PORRA do numero certo!");
		break;
	}
	
	*/
	float a, b;
	int op;
	
	printf("\nInforme um numero: \n");
	scanf("%f", &a);
	
	printf("Informe o segundo numero: \n");
	scanf("%f", &b);
	
	printf(" === Operacoes === \n");
	printf("1 - '+' \n");
	printf("2 - '-' \n");
	printf("3 - '*' \n");
	printf("4 - '/' \n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("O resultado utilizando a operacao +: %f ", (a + b));
		break;
		
		case 2:
			printf("O resultado utilizando a operacao -: %f", (a - b));
		break;
		
		case 3:
			printf("O resultado utilizando a operacao *: %f", (a * b));
		break;
		
		case 4:
			if( b != 0){
				printf("O resultado utilizando a operacao /: %f", (a / b));
			}else{
				printf("Não existe divisao por 0!");
			}
		break;
		
		default:
			printf("Informe uma das operacoes informadas!");
		break;		
	}
	
return 0;
}
