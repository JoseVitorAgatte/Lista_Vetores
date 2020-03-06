#include<stdio.h>
#include<stdlib.h>
// José Vitor de Oliveira Agatte
// Estrutura de dados - Prof. Bossini
int main(){
	
	int vet[30];
	int i;
	float soma;
 
	for(i=0;i<30;i++){
		printf("Digite o %d numero: \n", i+1);
		scanf("%d", &vet[i]);
	}
	soma=0;
	for(i=0;i<30;i++){
		soma = soma + vet[i];
	}
	printf("A media eh: %.2f",soma/30);
	
	return 0;
	
}


