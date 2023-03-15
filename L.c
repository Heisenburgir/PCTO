#include <stdio.h>
int main()
{

    int x;
    int somma = 0;
    int cifre = 0;
    int media;
        while(1){ 
        printf("inserire un numero ");
        scanf("%d", &x);
        somma += x;
        cifre += 1;
        media = somma/cifre;
        printf("%d\n", media);
        
    }
}