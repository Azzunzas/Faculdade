 //Escreva um programa que leia números inteiros do teclado e os armazene em um vetor alocado dinamicamente.
 //O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, 
 //sendo que caso ele deseje encerrar a entrada de dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória deste modo: 
 //a) Inicie o programa com um vetor de números inteiros de tamanho 3 alocado dinamicamente; 
 //b) Caso o espaço alocado esteja cheio, realoque espaço para mais 3 números inteiros; 
 //c) Após o usuário digitar o número ZERO, exiba na tela os elementos do vetor e 
 //d) Por fim, libere a memória alocada para o vetor.



 #include <stdio.h>
#include <stdlib.h>
 
 
int main() {
    int *vetor = (int*) malloc(3 * sizeof(int)); // aloca um vetor de tamanho 3
    int tamanho = 0; // inicializa o tamanho do vetor com 0
    int capacidade = 3; // inicializa a capacidade do vetor com 3
    int numero;
 
 
    printf("Digite uma sequencia de numeros (digite 0 para encerrar):\n");
 
 
    while (scanf("%d", &numero) == 1 && numero != 0) {
        if (tamanho == capacidade) { // se o tamanho do vetor for igual à capacidade, realoca o vetor com mais 3 espaços
            capacidade += 3;
            int *novo_vetor = (int*) realloc(vetor, capacidade * sizeof(int));
            if (novo_vetor == NULL) {
                printf("Erro ao alocar memoria.\n");
                free(vetor);
                return 1;
            }
            vetor = novo_vetor;
        }
 
 
        vetor[tamanho] = numero; // armazena o número no final do vetor
        tamanho++; // atualiza o tamanho do vetor
    }
 
 
    // imprime o vetor
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
 
 
    free(vetor); 
    return 0;
}