#include<stdio.h>
#include<stdlib.h>
// José Vitor de Oliveira Agatte
// Estrutura de dados - Prof. Bossini
int main(){
	
	int vet[40];
	int i, j, troca;
 
	for(i=0;i<40;i++){
		printf("Digite o %d numero: \n", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i=0;i<40;i++){
		for(j=i+1;j<40;j++){
			if(vet[i]>vet[j]){
				troca = vet[i];
				vet[i] = vet[j];
				vet[j] = troca;	
			}
		}
	}
	
	for(i=0;i<40;i++){
		printf("%d ", vet[i]);
	}	
	return 0;
}
