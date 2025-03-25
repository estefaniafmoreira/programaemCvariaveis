#include<stdio.h>
 
#define linha 3
#define coluna 3

int main(){
  int matriz [linha] [coluna];
  int target = 9;
  int found = 0;
  int soma = 1;
           
     
  for (int i = 0; i < linha; i ++){
    for (int j = 0; j < coluna; j ++){
        matriz[i] [j] = soma;
        soma++;
        printf("%d" , matriz [i] [j]);
  }
      printf("\n");
}

  //busca CONDIOCIONAL DO ELEMENTO allvo
     for (int i = 0; i < linha; i ++){
        for (int j = 0; j< coluna; j ++){
            if (matriz [i][j] == target){
            printf ("Elemento %d, encontrado na posição (%d , %d)\n", target, i , j);
            found = 1;
            break;
        
        }
       }
         if (found) break;
      }


 return 0;





}