#include<stdio.h>
#include<stdlib.h>
// José Vitor de Oliveira Agatte
// Estrutura de dados - Prof. Bossini
int main(){
	
	int vet[10], vetigual[10], semrep[10], ordem[10];
	int  i, j, c = 0, d = 0, troca;
 
	for(i=0;i<10;i++){
		printf("Digite o %d numero: \n", i+1);
		scanf("%d", &vet[i]);
	}
	
	vetigual[0] = vet[0];
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			
			if(vet[i]==vet[j] && i!=j){
					vet[i] = 0;
					d++;
			}
		}
	}
	
	
	for(i=0;i<10;i++){
		if(vet[i]!= 0 && c<i){
			semrep[c] = vet[i];
			c++;
		}
	}
	
	for(i=0;i<10-d;i++){
		printf("%d",semrep[i]);
	}
	return 0;
}
	
	
