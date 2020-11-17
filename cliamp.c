#include <stdio.h>
#include <stdlib.h>

int help();

int main(int argc, char const *argv[])
{
    int voltagem = atoi(argv[1]);
    int impedancia = atoi(argv[2]);
    printf("%dV, %dohm \n", voltagem, impedancia);
    printf("total: %dW \n", voltagem * voltagem / impedancia);
    help();
    return 0;
}

int help()
{
    printf("syntax: cliamp [volts] [impedance]\n");
}