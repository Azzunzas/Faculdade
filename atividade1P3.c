/*
Escreva um programa que aloque dinamicamente uma estrutura para armazenar dados sobre veículos (fabricante, modelo, ano e preço), 
sendo que o número de registros (pelo menos 2 registros) é lido do teclado e a memória alocada deve ser definida em função do tamanho da estrutura.
 Após isso, exiba na tela apenas os dados do segundo veículo cadastrado. Por fim, libere a memória alocada para a estrutura.
*/
#include <stdio.h>
#include <stdlib.h>
 
 
struct Registro {
    int ano;
    char fabricante[50], modelo[50];
    double valor;
};
 
 
int main() {
int quant;
struct Registro *registro;
 
 
    printf("\n informe a quantidade de registros: ");
        scanf("%d", &quant);
   
    //alocação de memoria
registro = (struct Registro *) malloc (quant * sizeof (struct Registro));
   
    if ( registro == 0){
        printf("\npouca memoria");
           exit(1);
    }
   
    for(int i = 0; i < quant; i++) {
      printf("Registro %d\n", i+1);
   
    printf("Digite o fabricante do carro: ");
       scanf("%s",(registro + i)->fabricante );
 
    printf("Digite o modelo do carro: ");
     scanf("%s", registro[i].modelo);
 
    printf("Digite o ano do carro: ");
      scanf("%d", &registro[i].ano);
 
    printf("Digite o preco do carro: ");
       scanf("%lf", &registro[i].valor);
  }
   
        printf("\nregistro numero 2: ");
          if(quant < 2){
            printf("\nsem registro!");
        }
    else{
        printf("\n%s %s %d %.2lf", (registro + 1)-> fabricante, (registro + 1)->  modelo, (registro + 1)->  ano, (registro + 1)->  valor);
    }
     
    return 0;
