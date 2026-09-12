#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
	int idade, ano;
	
	printf("Ex 1 \n");
	
	printf("Informe sua idade: \n");
	scanf("%d", &idade);
	
	printf("Informe o ano atual: \n");
	scanf("%d", &ano);
	
	printf("Ano que vc nasceu: %d \n", ano - idade);
	
	printf("=================================");
	
	printf("\nEx 2 \n");
	
	float km,ms;
	
	printf("Informe sua velocidade em km/h: ");
	scanf("%f",&km);
	
	ms =  km/36;
	
	printf("Sua velocidade em m/s: %f ",ms);
	
	printf("=================================");
	
	printf("\nEx 3 \n");

	float dolar, real, cota;
	
	printf("Informe o valor para conversao: \n");
	scanf("%f", &real);
	scanf("%f", &cota);
	
	printf("%f reais sao %f dolares",real, (real/cota));
	
	printf("=================================");
	
	printf("\nEx 4 \n");
	
	float f,c;
	
	printf("Informe a temperatura em graus Celsius: \n");
	scanf("%f", &c);
	
	f = c * (9.0/5.0) + 32.0;
	
	printf("A temperatura convertida eh: %f", f);

	printf("=================================");


 	printf("\nEx 5 \n");
	 
	 float angulo,radianos;
	 
	 printf("Informe o angulo: \n");
	 scanf("%f", &angulo);
	 
	 radianos = angulo * 3.141592/180;
	 
	 printf("Angulo convertido em Radianos: %f \n",radianos);
	 
	 printf("=================================");
	 
	 printf("\nEx 6 \n");
	 
	 int a;
	 
	 printf("Insira um numero: ");
	 scanf("%d",&a);
	 
	 
	 printf("Segue antecessor %d e %d sucessor",a - 1, a + 1);
	 
	 printf("=================================");
	 
	 
	 
	 printf("\nEx 7 \n");
	 
	 float valor, g1, g2, g3;
	 
	 valor = 780000,00;
	 
	 printf("Valor de 780.000,00 sera dividido entre 3 ganhadores, o primeiro recebera 46% porcento, o segundo recebera 32 porcento, o terceiro recebera o restante.\n");
	 
	  g1 = valor * 0.46;
	  g2 = valor * 0.32;
	  g3 = valor - g1 - g2;
	 
	 printf("primeiro ganhador ficara com: R$ %.2f\n",g1);
	 printf("segundo ganhador ficara com: R$ %.2f\n",g2);
	 printf("terceiro ganhador ficara com: R$ %.2f\n",g3);
	 
	  printf("=================================");
	  
	  printf("\nEx 8 \n");

	int seg, horas, minu;
	
	scanf("%d",&seg);
	horas = seg/3600;
	minu = seg - (horas*3600)/60;
	seg = seg - ((horas*3600) + (minu*60));
	
	printf("Tempo %d:%d:%d\n", horas, minu, seg);
	
	printf("=================================");
	
	
	
	printf("\nEx 9 \n");
	
	float tempo, distancia, litros, kmh;
	printf("Tempo da viagem: \n");
	scanf("%f", &tempo);
	
	printf("Velocidade media: \n");
	scanf("%f", &kmh);
	
	distancia = tempo * kmh;
	litros = distancia / 12;
	
	printf("Quantidade de litros utilizados na viagem: %.3f", litros);
	
	
	return 0;
}
