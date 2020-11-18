#include <stdio.h>
#include <stdlib.h>

int cliamp();

int main(int argc, char const *argv[])
{
    if(argc == 3)
        {
            int voltagem = argv[1];
            int impedancia = argv[2];
            cliamp(voltagem, impedancia);
        }
    if(argc < 3)
    {
        if(argv[1] == "help")
        {
            printf("help");
        }
    }
    return 0;
}

int cliamp(int volts, int imp)
{
    int voltagem = atoi(volts);
    int impedancia = atoi(imp);
    printf("\n%dV, %dohm \n", voltagem, impedancia);
    printf("total: %dW RMS\n", voltagem * voltagem / impedancia);
    return 0;
}
