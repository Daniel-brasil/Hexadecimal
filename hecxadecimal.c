#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
	
	int i, j;
	uint8_t comparacao = 15, *numero = malloc(1*sizeof(uint8_t));
	char hecxa[2], caracteres[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	numero[0] = 42;
	
	printf("\n");

	for(i=0; i<1;i++){
		
		for(j=0; j<2; j++){
						
			hecxa[(i*(j-1))+j] = caracteres[comparacao & (numero[i]>>(4*(1-j)))];
			
		}
		
		
	}


	printf("%c", hecxa[0]);
	printf("%c", hecxa[1]);
	
	return 0;	
	
}
