#include <stdio.h>

int main(){
    
    int v[] = {3,5,1,10,66,14,8,55};
    int tam = sizeof(v)/sizeof(v[0]);
    int fim = tam-1;//Váriavel associada a última posição do Array
    int continua, aux;
    
    printf("Array antes da ordenação..: ");
    for(int i=0; i<tam; i++){
        printf("[%d] ", v[i]);
    }
    printf("\n\n");
    
    do{
        continua = 0;
        
        for(int i=0; i<fim; i++){
            if(v[i] > v[i+1]){
                aux = v[i+1];//aux recebe o menor valor
                v[i+1] = v[i];
                v[i] = aux;//a posição da esquerda recebe aux que contém o menor valor
                continua = i;//Obriga o do-while a iniciar um novo laço for(){} caso continua for diferente de zero
            }
        }
        
        //Diminui uma posição do vetor a ser verificada, pois o maior valor ja está na posição correta
        fim --;
        
    }while(continua != 0);
    
    printf("Array depois do Bubble Sort..: ");
    for(int i=0; i<tam; i++){
        printf("[%d]", v[i]);
    }
    
    return 0;
}