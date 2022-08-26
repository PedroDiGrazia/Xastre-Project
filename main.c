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
void troca(int * vet, int i, int j);
int particiona(int * vet, int inicio, int fim);
int particionaRandom(int * vet, int inicio, int fim);
void quickSort(int * vet, int inicio, int fim);
float calculaMediana (int * vet);

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
    printf("\nQUICK SORT\n");
    quickSort(vet, 0, vet[TAM_VET - 1]);
    printaVetor(vet);
    printf("\n\nBUBBLE SORT\n\n");
    bubbleSort(vet);
    printf("\n");
    calculaMediana(vet);
    
    


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

void troca(int * vet, int i, int j){
	int aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}

int particiona(int * vet, int inicio, int fim)
{
	int pivo, pivo_indice, i;
	
	pivo = vet[fim];
	pivo_indice = inicio;
	
	for(i = inicio; i < fim; i++)
	{
		if(vet[i] <= pivo)
		{
			troca(vet, i, pivo_indice);
			pivo_indice++;
		}
	}
	
	troca(vet, pivo_indice, fim);
	
	return pivo_indice;
}

int particionaRandom(int * vet, int inicio, int fim)
{
	int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
	
	troca(vet, pivo_indice, fim);

	return particiona(vet, inicio, fim);
}

void quickSort(int * vet, int inicio, int fim)
{
	if(inicio < fim)
	{
		int pivo_indice = particionaRandom(vet, inicio, fim);
		
		quickSort(vet, inicio, pivo_indice - 1);
		quickSort(vet, pivo_indice + 1, fim);
	}
}

float calculaMediana (int * vet)
{

float pos1, pos2;

    float res;

    switch (TAM_VET % 2)
    {
        case 0:

            pos1 = vet[TAM_VET/2 - 1];
            pos2 = vet[TAM_VET/2];
            pos1 = pos1 + pos2;

        res = (pos1/2);
        break;
    

        case 1: 

            pos1 = vet[(TAM_VET - 1)/2];

        res = pos1;
        break;
    }
    
    printf("\n\n Mediana do vetor = %.2f", res);
}

