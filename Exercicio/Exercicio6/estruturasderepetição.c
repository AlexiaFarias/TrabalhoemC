#include <stdio.h>


int main() 
{
    int i = 0;
    while (i < 10) {
        printf("while: %d\n", i);
        i++;
    }
    do {
        printf("do: %d\n", i);
        i++;
    } while (i < 10);
    return 0;
}

//O código contém dois laços de repetição (while e do..while). Como no exemplo:
O while começa com i = 0 e imprime valores de 0 a 9.
Após o while, i já vale 10.
O do..while roda uma vez antes de verificar a condição e imprime do: 10.

//A principal diferença está na ordem de execução:

while: verifica a condição antes de executar o bloco de código. Se a condição for falsa no início, o bloco nunca será executado.
do..while: executa o bloco pelo menos uma vez, pois a condição é verificada depois da execução.

//Se a pergunta se refere à reformulação do código de outra maneira, podemos implementar o mesmo comportamento usando apenas um dos loops.

//while: usado quando não se sabe previamente quantas vezes o laço será executado. Ele depende de uma condição externa.
for: usado quando o número de iterações é conhecido previamente. Ele é composto por três partes: inicialização, condição e incremento.

//Use while quando não souber o número exato de repetições (ex.: esperar entrada do usuário).
Use for quando souber o número exato de iterações (ex.: percorrer um vetor).