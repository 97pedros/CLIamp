#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int voltagem = atoi(argv[1]);
    int impedancia = atoi(argv[2]);
    printf("voltagem: %d, impedancia %d \n", voltagem, impedancia);
    return 0;
}
