#include <stdio.h>
int main()
{
    char stringa[] = "";
    int i = 0;
    int a = 1;
    int b = 2;
    int c = 3;
    while(1)
    {
    printf("inserisci una parola e la ripeterò finchè kakarot non dirà STOP \n");
    scanf(" %s", stringa);


        if(stringa[i] == 'S' && stringa[a] == 'T' && stringa[b] == 'O' && stringa[c] == 'P')
        {
        break;
        }
        else
        {
            printf("%s\n", stringa);
        }
    
    }
}