#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int quant, i, j, count, max_count = 0, moda;
    double *vetor;
    double soma = 0.0, media, mediana;
    //pede a quantidade de dados para gerar um vetor expecifico
        printf("digite a quantidade de dados a serem calculados: \n");
        scanf("%d",&quant);
    //aloca memoria para o ponteiro de vetor com o tamanho de quant
        vetor = (double *) malloc(quant * sizeof (double));
    for (i = 0; i < quant; i++)
    {
    //pede os numeros para o calculo
            printf("digite os numeros para o calculo: \n");
            scanf("%lf",&vetor[i]);
    } 
    //faz a soma dos numeros coletados no vetor
    for (i = 0; i < quant; i ++)
    {
        soma += vetor[i];
    }
    //faz o calculo de média do vetor 
        media = soma/quant;
        printf("média = %.2lf\n",media);
    //por meio de dois loops "for" o programa organiza o vetor colocando os numeros em ordem crscente para depois calcularmos a moda e mediana do mesmo.   
    for (i = 0;i < quant-1; i++)
    {
      for(j = i+1;j<quant;j++)
      {
          if(vetor[i]>vetor[j])
          {
              double temp = vetor[i];
              vetor[i] = vetor[j];
              vetor[j] = temp;
          }
      } 
    }
    //mediana do vetor
    if (quant / 2 == 0)
    {
        mediana = (vetor[quant/2-1] + vetor[quant/2]) / 2.0;
    }
    else
    {
        mediana = vetor[quant/2];
    }
    printf("mediana %.2lf\n",mediana);
    //moda do vetor 
    for (i = 0; i < quant; i++)
    {
        count = 0;
        for(j = 0; j < quant;j++)
        {
            if (vetor[j] == vetor[i])
            {
                count++;
            }
        }
        if(count > max_count)
        {
           max_count = count;
           moda = vetor[i];
        }
    }
    
    printf("moda %d\n", moda);
    
    free(vetor);
    return 0;
}