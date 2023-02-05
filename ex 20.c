//Fazer um programa que tenha a seguinte saida, conforme o tamanho da palavra escrita.
//Saida na tela.
//xxx
//xxx xxx
//xxx xxx xxx

#include <stdio.h>

int main() {

  char palavra[20];
  
  printf("Digite uma palavra:\n");
  gets(palavra);

  for(int i = 0; i < strlen(palavra); i++){
    printf("%s ", palavra);
    for(int j = 1; j <= i; j++){
      printf("%s ", palavra);
    }
    printf("\n");
  }
  
}