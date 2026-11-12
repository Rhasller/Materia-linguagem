#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	printf("1. Mostrar");
printf("2. Cadastrar");
printf("0 Sair\n");

do{
    scanf("%d", &n);
    printf("%d", n);
} while (n <= 0 && n <= 2);

printf("Valido");

if (n == 0) {
    i = 0;
    printf("Saindo");
}

return 0;
}
	
	return 0;
}
