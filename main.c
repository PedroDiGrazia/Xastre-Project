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


int main()
{
    int vet[TAM_VET];
  
    
 
    geraVetor(vet); pulaLinha();
    printf("VETOR INICIAL"); pulaLinha();
    printaVetor(vet); pulaLinha();

    


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
