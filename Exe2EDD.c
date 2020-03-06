#include<stdio.h>
#include<stdlib.h>
// José Vitor de Oliveira Agatte
// Estrutura de dados - Prof. Bossini
int main(){
	
	int vet[10];
	int i, maior;
 
	for(i=0;i<10;i++){
		printf("Digite o %d numero: \n", i+1);
		scanf("%d", &vet[i]);
	}
	
	maior=vet[0];
	
	for(i=0;i<10;i++){
		if(vet[i]>maior){
			maior=vet[i];
		}
		
	}
	printf("O maior numero digitado foi %d", maior);
	return 0;
}
