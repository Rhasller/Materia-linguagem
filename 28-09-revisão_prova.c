#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int um,dois,tres,quatro,cinco;
	int pri,seg,ter,quarto, quinto;
	
	printf("Insira 5 numeros: ");
	scanf("%d, %d, %d, %d, %d",&um,&dois,&tres,&quatro,&cinco);
	
	if(um == (dois + 1) || um == (tres + 1) || um == (quatro + 1) || um == (cinco + 1)){
		pri = um;
	}
	
	if( dois == (um - 1) || dois == (tres + 1) || dois == (quatro + 1) || dois == (cinco + 1)){
		seg = dois;
	}
	if(tres == (um - 1) || tres == (dois - 1) || tres == (quatro + 1) || tres == (cinco + 1)){
		ter = tres;
	}
	
	printf("%d %d %d %d %d", pri, seg, ter, quarto, quinto);
	
	return 0;
}
