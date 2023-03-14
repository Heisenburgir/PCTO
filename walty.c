#include <stdio.h>

int main()
{
    int età;
    char sesso;
    printf("quanti anni hai? ");
    scanf("%d", &età);
    printf("sesso: U | F | W:\n");
    scanf(" %c", &sesso);
    printf("ho %d anni e sono %c\n", età, sesso);
    return 0;
}
