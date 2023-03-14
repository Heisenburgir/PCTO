#include <stdio.h>

int main()
{
    int lato1, lato2, lato3;
    printf("inserisci i valori dei 3 lati: \n");
    scanf("%d %d %d", &lato1, &lato2, &lato3);
    if(lato1+lato2 > lato3 && lato1+lato3 > lato2 && lato2+lato3 > lato1)
    {
            if(lato1 == lato2 && lato1 == lato3 && lato2 == lato3)
            {
                printf("Triangolo Equilatero\n");
            }
            else if(lato1 != lato2 && lato1 != lato3 && lato2 != lato3) {
                printf("Triangolo Scaleno\n");
            }else {
                printf("Triangolo Isoscele\n");
            }

    }
                
    else
    {
        printf("Non è un Triangolo\n");
    }
}