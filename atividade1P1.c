//Pergunta 1
//Escreva um programa para armazenar dinamicamente um vetor de inteiros contendo 1500 elementos. 
//Atribua para cada elemento do vetor o valor do seu índice multiplicado por 2. Após isso, 
//exiba na tela os 10 primeiros e os 10 últimos elementos do vetor. Por fim, libere a memória alocada para o vetor.

#include <stdio.h>
#include <stdlib.h>
 
 
int main() {
   int *vetor;
 
     vetor = (int*) malloc(1500 * sizeof(int));
     
     for (int i = 0; i <= 1500; ++i) {
         vetor[i] =i * 2;
     }
    for (int i = 0; i <= 9; i++){
     printf("%i\n", vetor[i]);
 }
    for (int i = 1491; i <=1500; i++){
     printf("%i\n", vetor[i]);
     
}
free (vetor);
    return 0;
}
