#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int voltagem = atoi(argv[1]);
    int impedancia = atoi(argv[2]);
    printf("%dV, %dohm \n", voltagem, impedancia);
    printf("total: %dW \n", voltagem * voltagem / impedancia);
    return 0;
}
