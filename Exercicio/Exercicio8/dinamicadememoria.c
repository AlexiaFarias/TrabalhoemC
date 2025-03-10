
   #include <stdio.h>
   #include <stdlib.h>

 int main() 
 {
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("Valor: %d\n", *p);
    free(p);
    return 0;
}
