#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numero;
    printf("Entre com um inteiro de 1 a 99: ");
    scanf("%d", &numero);
    if (numero < 0 || numero > 99)
        return EXIT_FAILURE;
    printf("Número por extenso: \"");
    int dezena = numero / 10;
    int unidade = numero % 10;
    switch (dezena) {
        case 0:
            break;
        case 1:
            switch (unidade) {
                case 0:
                    printf("dez");
                    break;
                case 1:
                    printf("onze");
                    break;
                case 2:
                    printf("doze");
                    break;
                case 3:
                    printf("treze");
                    break;
                case 4:
                    printf("quatorze");
                    break;
                case 5:
                    printf("quinze");
                    break;
                case 6:
                    printf("dezesseis");
                    break;
                case 7:
                    printf("dezessete");
                    break;
                case 8:
                    printf("dezoito");
                    break;
                case 9:
                    printf("dezenove");
                    break;
                default:
                    return EXIT_FAILURE;
            }
            break;
        case 2:
            printf("vinte");
            break;
        case 3:
            printf("trinta");
            break;
        case 4:
            printf("quarenta");
            break;
        case 5:
            printf("cinquenta");
            break;
        case 6:
            printf("sessenta");
            break;
        case 7:
            printf("setenta");
            break;
        case 8:
            printf("oitenta");
            break;
        case 9:
            printf("noventa");
            break;
        default:
            return EXIT_FAILURE;
    }
    if (dezena != 0 && dezena != 1 && unidade != 0) {
        printf(" e ");
    }
    if (dezena != 1) {
        switch (unidade) {
            case 0:
                break;
            case 1:
                printf("um");
                break;
            case 2:
                printf("dois");
                break;
            case 3:
                printf("três");
                break;
            case 4:
                printf("quatro");
                break;
            case 5:
                printf("cinco");
                break;
            case 6:
                printf("seis");
                break;
            case 7:
                printf("sete");
                break;
            case 8:
                printf("oito");
                break;
            case 9:
                printf("nove");
                break;
            default:
                return EXIT_FAILURE;
        }
    }
    printf("\"");
    return EXIT_SUCCESS;
}