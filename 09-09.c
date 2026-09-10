#include <stdio.h>
#include <stdlib.h>


int mult(int digito, int valor){
	return digito + valor;
}

int main(int argc, char *argv[]) {
	
	int dg1, dg2, dg3, dg4, dg5, dg6, dg7, dg8, dg9, dv, dv2, soma, resto;
	
	
scanf("%d %d %d . %d %d %d . %d %d %d - %d %d",&dg1,&dg2,&dg3,&dg4,&dg5,&dg6,&dg7,&dg8,&dg9,&dv,&dv2);
	
		printf("Confirme o cpf:%d%d%d.%d%d%d.%d%d%d-%d%d",
				dg1,dg2,dg3,dg4,dg5,dg6,dg7,dg8,dg9,dv,dv2);
	
	soma = mult(dg1,10)+mult(dg2,9)+mult(dg3,8)+mult(dg4,7)+mult(dg5,6)+mult(dg6,5)+mult(dg7,4)+mult(dg8,3)+mult(dg9,2);
	
	soma *=10;
	resto = soma%11;
	
	/*printf("Ex 2\n");
	
	float g, f, calculof,calculog;
	
	printf("Informe a temperatura desejada em graus ou fahrenheit: \n");
	scanf("%f",&g);
	scanf("%f",&f);
	
	calculof = g *(9.0/5.0)+ 32;
	calculog = f -32 / 1.8;
	
	printf("Segue calculo em F: %f e calculo em G: %f", calculof, calculog);
	*/
	
	return 0;

}
