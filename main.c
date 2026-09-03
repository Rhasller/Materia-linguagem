#include <stdio.h>
#include <stdlib.h>

void exec2 (){
/*Faça um programa que leia um valor em reais e a cotação do dolar.Em seguida,
imprima o valor correspondente em dólares*/
	float dolar, real, cota;
	
	printf("Informe o valor para conversao: \n");
	scanf("%f", &real);
	scanf("%f", &cota);
	
	printf("%f reais sao  %f dolares",real, (real/cota));
}

void exec3 (){
/*Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em Fahrenheir*/
	
	float tempC, tempF;
	printf("Qual a temperatura em C?\n");
	scanf("%f", &tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf("A temperatura máxima de hj na tela da globo %f", tempF);
}


void exec8(){
/* Leia um valor inteiro, que é o tempo de duração em segundos de um evento
em determinado evento em uma fábrica, e informe-o*/
		
	int seg, horas, minu;
	
	scanf("%d",&seg);
	horas = seg/3600;
	minu = seg - (horas*3600)/60;
	seg = seg - ((horas*3600) + (minu*60));
	
	printf("Tempo %d:%d:%d", horas, minu, seg);
}
int main(int argc, char *argv[]) {
	
	int resposta;
	
	printf("Usuario, qual exercicio quer resolver? |2|3|8|\n");
	scanf("%d", &resposta);
	
	switch(resposta){
case 2:
	exec2();
	break;


case 3:
	exec3();
	break;

case 8:
	exec8();
	break;
}
	return 0;
}
