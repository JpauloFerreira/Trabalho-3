/*Faça um programa que leia dois vetores de 10
elementos. Crie um vetor que seja a união entre
os 2 vetores anteriores, ou seja, que contém os
números dos dois vetores. Não deve conter
números repetidos*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main( ){
	setlocale(LC_ALL,"portuguese");
	int vet1[10],vet2[10],vet3[20],cont=0,i,j,k,aux;
	
	printf("Digite o primeiro vetor: \n");
	for(i=1;i<=10;i++){
		printf("%dº número: ",i);
		scanf("%d",&vet1[i]);
		vet3[i]=vet1[i];
	}
	cont=10;
	printf("\nDigite o segundo vetor: \n");
	for(i=1;i<=10;i++){
		printf("%dº número: ",i);
		scanf("%d",&vet2[i]);
		vet3[cont]=vet2[i];
		cont++;
	}
	int tam=19;
	
	for(i=1;i<=tam;i++){
		if(cont==1){
			i--;
		}
		cont=0;
		for(j=i+1;j<=tam;j++){
			if(vet3[i]==vet3[j]){
				tam--;
				for(k=j;k<tam;k++){
					vet3[k]=vet3[k+1];
					cont=1;
					}
				}
			}
		}
	
	printf("\n\nVetor resultante: ");
	for(i=1;i<=tam;i++){
		printf("%d ",vet3[i]);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
