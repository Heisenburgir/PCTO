#include <stdio.h>

int main()
{
    int numero1, numero2, numero3;
    printf("inserisci tre numeri: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    if(numero1-numero2 == numero2-numero3)
    {
        printf("%d, %d, %d sono una serie aritmetica\n", numero1, numero2, numero3);
    }
    else
    {
        printf("%dd, %d, %d NON sono una serie aritmetica\n", numero1, numero2, numero3);
    }
}