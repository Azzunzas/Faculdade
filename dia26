#include <stdio.h>
#include <stdlib.h>
 
 
int main() {
    
    int vetor[5];
    int primeiro = -1, ultimo = -1;
    int i, numero_elemento, numero_menu;
    
    while(1) {
        printf("==========MENU=====\n");
        printf("[1] Inserir um elemento na fila.\n");
        printf("[2] Remover elemento da fila.\n");
        printf("[3] Listar elementos da fila.\n");
        printf("[4] Sair.\n");
        scanf("%i", &numero_menu);
        
        switch(numero_menu) {
            case 1:
                if ((primeiro == 0 && ultimo == 4) || (primeiro == ultimo + 1)) {
                    printf("----------A fila está cheia----------\n");
                }
                else {
                    printf("Digite o elemento: ");
                    scanf("%i", &numero_elemento);
                    if (ultimo == -1) {
                        primeiro = 0;
                    }
                    ultimo = (ultimo + 1) % 5;
                    vetor[ultimo] = numero_elemento;
                }
                
                break;
            case 2:
                if (ultimo == -1) {
                    printf("----------A fila está vazia----------\n");
                }
                else {
                    primeiro = (primeiro + 1) % 5;
                    printf("----------Elemento removido com sucesso----------\n");
                }
                if (primeiro == ultimo + 1) {
                    primeiro = -1;
                    ultimo = -1;
                }
                
                break;
            case 3:
                if (ultimo == -1) {
                    printf("----------A fila está vazia----------\n");
                }
                else {
                    printf("fila: ");
                    for (i = primeiro; i != ultimo; i = (i + 1) % 5) {
                        printf("%i ", vetor[i]);
                    }
                    printf("%i\n", vetor[i]);
                }
                
                break;
            case 4:
                printf("Saindo.....................");
                exit(1);
                
                break;
            default:
                printf("----------Digito inválido----------\n");
        }
    }
    return 0;
}
