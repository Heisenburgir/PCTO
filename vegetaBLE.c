#include <stdio.h>
int main()
{
char stringa[] = "";
int i = 0;
printf("inserisci una parola kakarot ");
scanf(" %s", stringa);
while (stringa[i] != '\0')
{
    i++;
}
printf("la parola %s è lunga %d, kakarot\n", stringa, i);
}