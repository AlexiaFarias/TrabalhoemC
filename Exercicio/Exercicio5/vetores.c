#include <stdio.h>

int man()
{
    int numeros[5] = {10,20,30,40,50};
    for (int i = 0; i < 5; i ++) {
        printf("%d" , numeros[i]);
    }

    return 0; 
}

//A - Um vetor é uma estrutura de dados que armazena múltiplos valores do mesmo tipo em posições consecutivas de memória. 
//B - Uma string em C é uma sequência de caracteres armazenada em um vetor do tipo char, finalizada com o caractere nulo (\0). 
O C não possui um tipo de dado específico para strings, então elas são manipuladas como arrays de caracteres.