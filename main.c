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
void MaiorNumero (int * vet);
void MenorNumero (int * vet);
void bubbleSort (int * vet);

int main()
{
    srand(time(NULL))
    int vet[TAM_VET];
  
    
 
    geraVetor(vet); pulaLinha();
    printf("VETOR INICIAL"); pulaLinha();
    printaVetor(vet); pulaLinha();
    tiraMedia(vet);
    MaiorNumero(vet);
    MenorNumero(vet);
    


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

void MaiorNumero(int * vet)
{
    int aux = 0;
    
    for(int i = 0; i < TAM_VET; i++)
    {
        if(vet[i] > aux)
        {
            aux = vet[i];
        }
    }
    printf("\nMaior numero: %d", aux);
}

void MenorNumero(int * vet)
{
    int aux = 0;
    
    for(int i = 0; i < TAM_VET; i++)
    {
        if(vet[i] < aux){
            aux = vet[i];
        }
    }
    
    printf("\nMenor numero: %d \n", aux);

}

void bubbleSort (int * vet) 
{
    int k, j, aux;

    for (k = 1; k < TAM_VET; k++){
    
        for (j = 0; j < TAM_VET - 1; j++) {
            
            if (vet[j] > vet[j + 1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
    printaVetor(vet);
}
