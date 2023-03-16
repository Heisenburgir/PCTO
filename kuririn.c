#include <stdio.h>
int main()
{
    char stringa[100];

    printf("inserisci una parola goku! ");
    scanf(" %s", stringa);

    int i = 0;
    while(stringa[i] != '\0')
    {
        i++;
    }
    i--;
    int j = 0;
    char c;
    while (stringa[j] != '\0' && j < i)
    {
        c = stringa[j];
        stringa[j] = stringa[i];
        stringa[i] = c;
        i--;
        j++;
    }
    
    printf("%s\n", stringa);
}