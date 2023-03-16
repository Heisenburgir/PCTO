#include <stdio.h>
int main()
{
    char stringa[] = "";
    printf("Inserisci una parola e te la dirò al contrario! ahahahifgouvb ");
    scanf(" %s", stringa);
    int i = 0;
    while(stringa[i]!= '\0')
    {
    i++;
    }
    while(i >= 0)
    {
        printf("%c", stringa[i]);
        i--;
    }
    printf("\n");
}