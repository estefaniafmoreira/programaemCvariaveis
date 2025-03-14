#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
      
    // Gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Numero entre 1 e 100

    //Inicio do jogo 
    printf("Bem-vindo ao Jogo\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    
    printf("Escolha a comparação:\n ");
    scanf("%c", &tipoComparacao);
    
    printf("Digite um número (entre 1 e 100):\n ");
    scanf("%d", &numeroJogador);

    //Exibir número do Computador
    printf("O número do computador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case M:
        printf("você escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
   break;
    case N :
    printf("você escolheu a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case I:
    printf("você escolheu a opção igual!\n");
    resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;   

    default:
       printf("Opção Inválida!\n");
        break;
    } 

    printf("O numero do computadoe é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {  
        printf("Parabéns, Você venceu!\n");
    } else {
        printf("VocÊ perdeu!\n");
    }




}