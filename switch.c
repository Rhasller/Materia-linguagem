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
	/*
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
	*/
	char letra;
	
	printf("Informe uma letra minuscula: ");
	scanf(" %c", &letra);
	
	switch(letra){
	
		case 'a':
			printf("\nAmor");
		break;
		
		case 'b':
			printf("\nBaixinho");
		break;
		
		case 'c':
			printf("\nCoracao");
		break;
		
		case 'd':
			printf("\nDocinho");
		break;
		
		case 'e':
			printf("\nEscola");
		break;
		
		case 'f':
			printf("\nFeijão");
		break;
		
		case 'g':
			printf("\nGente");
		break;
		
		case 'h':
			printf("\nHumano");
		break;
		
		case 'i':
			printf("\nIgualdade");
		break;
		
		case 'j':
			printf("\nJuventude");
		break;
		
		case 'k':
			printf("\nKakah");
		break;
		
		case 'l':
			printf("\nLiberdade");
		break;
		
		case 'm':
			printf("\nMolecagem");
		break;
		
		case 'n':
			printf("\nNatureza");
		break;
		
		case 'o':
			printf("\nObrigado");
		break;
		
		case 'p':
			printf("\nProteja");
		break;
		
		case 'q':
			printf("\nQuero-quero");
		break;
		
		case 'r':
			printf("\nRiacho");
		break;
		
		case 's':
			printf("\nSaudade");
		break;
		
		case 't':
			printf("\nTerra");
		break;
		
		case 'u':
			printf("\nUniverso");
		break;
		
		case 'v':
			printf("\nVitoria");
		break;
		
		case 'w':
			printf("\nWarzone");
		break;
		
		case 'x':
			printf("\nXuxa");	
		break;
		
		case 'y':
			printf("\nYaya");
		break;
		
		case 'z':
			printf("\nZaazzzzz");
		break;
		
		default:
			printf(" TU TEM A KARALHA DAS ORIENTACOES E NAO USA EH DE FUDER!");
		break;		
	}
return 0;
}
