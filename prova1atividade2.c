//Escreva um programa que aloque dinamicamente uma matriz ''m'' e a preencha com ''i + j'',
 //sendo que o número de linhas e colunas são lidos do teclado e a área de memória alocada deve ser definida em função do tamanho da matriz.
 // Após isso, exiba na tela os elementos da matriz. Por fim, libere a memória alocada para a matriz.

 #include <stdio.h>
#include <stdlib.h>
 
 
int main(){
    int *m;
    int linhas, colunas, i, j;
   
    printf("Informe o número de linhas: ");
    scanf("%d", &linhas);
 
 
    printf("Informe o número de colunas: ");
    scanf("%d", &colunas);
   
    /* Aloca espaço para os elementos da matriz */
    m = (int*) malloc(linhas * colunas * sizeof(int));
   
    /* Mostra mensagem e encerra o programa, caso não haja memória suficiente */
    if(m == NULL){
        printf("Memória insuficiente.");
        exit (1);
    }
 
 
    /* Recebe os elementos para a matriz */
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("\nInforme o elemento para o índice ", i, j);
            scanf("%d", &m[(i * colunas) + j]);
        }
    }
 
 
    /* Mostra os elementos armazenados na matriz */
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("%d ", m[i * colunas + j]);
        }
        printf("\n");
    }
 
 
    /* Libera a memória alocada para a matriz */
    free (m) ;
   
    return 0;