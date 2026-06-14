#include <stdio.h>

int main() {
    int c;

    printf("Digite um caractere: ");
    c = getc(stdin);

    printf("Você digitou: %c \n", c);

    return 0;
}