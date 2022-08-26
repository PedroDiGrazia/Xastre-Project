#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define TAM_VET 1000

void geraVetor(int vet[]);
void printaVetor(int vet[]);
void pulaLinha();
void tiraMedia (int * vet);

int main()
{
    int vet[TAM_VET];
  
    
 
    geraVetor(vet); pulaLinha();
    printf("VETOR INICIAL"); pulaLinha();
    printaVetor(vet); pulaLinha();
    tiraMedia(vet);

    


    return 0;
}

void geraVetor(int vet[])
{
    
    for(int i=0; i<TAM_VET; i++)
    {
       vet[i] = rand()%TAM_VET;
    }
}

void printaVetor(int vet[])
{
    for(int i=0; i<TAM_VET; i++)
    {
        printf("%d ", vet[i]);
    }
}

void pulaLinha()
{
    printf("\n\n\n");
}

//Recebe um vetor e printa a media dos elementos
void tiraMedia(int * vet)
{
    int soma = 0;
    
    for(int i = 0; i < TAM_VET; i++)
    {
        soma = soma + vet[i];
    }
    
    float media = 0;

    media = (float)soma/TAM_VET;
    
    printf("Valor da media = %.2f", media);

}
