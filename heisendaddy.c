#include <stdio.h>
int main()
{
    char sesso;

    printf("Tu sei\n 'M' o 'm' | 'F' o 'f' | 'N' o 'n'\n ");
    scanf("%c", &sesso);
    if(sesso == 'M' || sesso == 'm')
    {
        printf("non puoi usare il bagno delle donne\n");
    }
    else if(sesso == 'F' || sesso == 'f')
    {
        printf("non puoi usare il bagno degli uomini\n");
    }
    else if(sesso == 'N' || sesso == 'n')
    {
        printf("non sei identificato\n");
    }
    else
    {
        printf("error 404: gender not found\n");
    }
}

