/*Pergunta 1
Escreva um programa que implemente uma pilha em um vetor com capacidade para 5 números inteiros. Um menu deve ser apresentado com as seguintes opções:

# MENU #

[1] Adicionar elemento na pilha

[2] Remover elemento da pilha

[3] Buscar elemento na pilha

[4] Listar os elementos da pilha

[5] Sair

Observações:

- Cuide da necessidade de verificar se a pilha está vazia ou se a pilha está cheia em conforme a opção

selecionada no menu.

- Para a opção 3, caso o elemento exista na pilha, deverá ser mostrado em qual posição da pilha o

mesmo se encontra. Caso contrário, deverá ser mostrada a mensagem "Elemento não encontrado".*/

#include <stdio.h>
#include <stdlib.h>
 
 
int main() {
    int resp, topo;
    int pilha [5];
     
     topo = -1;
while(1){
    printf("\n.....MENU.....\n");
    printf("[1] Adicionar elemento na pilha"
   " \n[2] Remover elemento na pilha"
    "\n[3] Buscar elemento na pilha"
    "\n[4] Listar elementos na pilha"
    "\n[5] Sair\n");
    scanf("%i", &resp);
   
    switch (resp){
     case 1:
        if (topo < 4){
          printf("digite o elemento que deseja colocar na pilha: ");
             scanf("%d", &pilha[topo + 1]);
             topo++;
     }
        else
            printf("Pilha cheia, remova ou recomece a pilha");
        break;
       
    case 2:
    if (topo <  4 && topo >= 0) {
        pilha[topo] = 0;
         topo -= 1;
        printf("o ultimo elemento da pilha foi removido!");
    }
    else{
     printf("opa não tem nada para tirar da pilha!");
    }
        break;
   
    case 3:
    int i, j;
     printf("\n qual o elemento? ");
     scanf("%d", &i);
        if(topo < 5 && topo >= 0){
            for (j = 0; j <= topo; j++ ) {
                if (pilha[j] == i) {
             printf("\nO elemento %i está na posição: %i", i, j);
             break;
             }
             if(j == topo){
         printf("o elemento escolhido não existe na pilha!");
                } 
         }
        }
 
 
         
        break;
     
    case 4:
    int w;
     printf("pilha: ");
     for (w = 0; w < 5; w++) {
         printf("%d ", pilha[w]);
     }
        break;
       
    case 5:
        exit(1);
        break;
 
 
    default:
        printf("caractere invalido!!!");
    }    
}      
    return 0;
}