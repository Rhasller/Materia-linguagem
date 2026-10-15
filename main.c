#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 10 numeros inteiros positivos, calcule a soma e a média
 e mostre na tela.
 OBS: somente com 3 variáveis (i,n,s). Não pode ser vetor,não pode usar laço
*/

int main(int argc, char *argv[]) {
	
	int i, n, s;
	i=0;
	n=0;
	s=0;
	
	while(i < 10){
		scanf("%d", &n);
		if (n > 0){
			s += n;
			i++;
		}
	}
	printf("%d | %d",s, s/10);
	
	
	return 0;
}
