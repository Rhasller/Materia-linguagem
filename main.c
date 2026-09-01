#include <stdio.h>
#include <stdlib.h>

/*condições alinhadas é quando tem um bloco de código dentro de outro
( if dentro de if, etc...)*/

/*sempre que a pergunta usa verifique ou caso é pra testar o que está inserdo 
dentro do programa*/

/*&& == lógico ou e-lógico(implementação lógica) == E*/
/*|| == OU */

/*
31/08 crie um priograma que leia um número, entre 1 e 9 e verifique se ele é um número primo, caso seja, imprima seu dobro, caso não
seja primo, verifique se é par ou impar.Se for par mostre o resultado da soma com
2. Se for impar mostre seu próximo e seu anterio, caso seja negativo moste seu in-
verso.
Caso não esteja entre 1 e 9 mostre _out_of_range.*/

int main(int argc, char *argv[]) {
	/*	
	int n;
	printf("Entre com o numero: \n");
	scanf("%d", &n);
	
		// equivalente (n>1 && n<=10)
	if( n<10 && n>0)
		//isso é interessante (!(n==4 || n==6 || n==8 || n==9))
		if (n==1 || n==2 || n==3 || n==5 || n==7)
			printf("O dobro de %d = %d", n, (n*2));
		
		else if (n%2 == 0)
			printf("%d+2 = %d",n, n+2);
		
		else
			printf("|%d||%d||%d|", n-1,n,n+1);
		
		else printf("_out_of_range");
	*/
	
	/*
	char letra;
	scanf("%c",&letra);
	if(letra == 'a')printf("A de amor");
	else if(letra == 'b')printf("B de baixinho da xuxa");
	else if(letra == 'c')printf("C de coracao");
	
	*/
	
	char op;
	scanf("%c", &op);
	switch(op){
	
	case 'a': printf("Opa ta falando com ele"); break;
	
	case 'b': printf("Benedito"); break;
	
	case 'c': printf("É complicada a situação"); break;
	
	case 'd': printf("Tamo Junto"); break;
	
}
	
	return 0;
	
	}
