#include <stdio.h>

int main() {
  
    int num;
  
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num%2==0){
      printf("Esse número é par!");
    }
    else{
      printf("Esse número é ímpar!");
    }
  
    return 0;
}
  