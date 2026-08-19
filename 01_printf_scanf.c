#include <stdio.h>

int main() {
    int numero;

    //printf exibe a mensagem na tela 
    printf("Digite um numero inteiro: \n");
    
    //scanf le o numero digitado e salva na variavel 'numero'
    scanf("%d", &numero);
    
    //printf exibe o resultado usando o valor guardado 
    printf("Voce digitou o numero: %d \n", numero);
    
    return 0;
}
