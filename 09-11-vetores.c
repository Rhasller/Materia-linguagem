#include <stdio.h>
#include <stdlib.h>

// BLOCO DE CÓDIGO REUTILIZAVEL POR TODO O PROGRAMA, QUE RECEVE DOIS VALORES
// INTEIROS PARA REALIZAR O CALCULO
int calculo_maior (int a, int b){
	return ((a + b + (abs((a - b))))/ 2);
}


int main(int argc, char *argv[]) {

	/* EXERCICIO 4 DIA 09/11 */
	int vet[10];
	int i,maior;
	
	for (i = 0; i < 10; i++){
		scanf("%d",&vet[i]);
	}
	// INICIALIZAÇÃO, VERIFICAÇÃO, INCREMENTO
	for (i = 1, maior = vet[0]; i < 10; i++){
		maior = calculo_maior(maior, vet[i]);
		
	}
	printf("%d eh o maior", maior);
	return 0;
}
