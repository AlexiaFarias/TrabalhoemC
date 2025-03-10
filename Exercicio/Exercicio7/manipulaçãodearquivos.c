#include <stdio.h>

int main()
{
 
    FILE *arquivo = fopen("dados.txt", "w");
    fprintf(arquivo, "Olá, mundo!\n");
    fclose(arquivo);
    return 0;
}
 

    return 0;
}