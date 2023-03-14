#include <stdio.h>

int main()
{
    int lato1, lato2, lato3;
    printf("inserisci i valori dei 3 lati: \n");
    scanf("%d %d %d", &lato1, &lato2, &lato3);
    if(lato1+lato2 > lato3)
    {
       if(lato1+lato3 > lato2)
       {
            if(lato2+lato3 > lato1)
            {
            
            printf("Triangolo\n");
            }
            else
            printf("NO\n");
       }
       
       else
       {
        printf("NO\n");
       }
        
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}