#include <stdio.h>
int main()
{
int n;
int i = 0;
printf("Inserisci un numero: ");
scanf("%d", &n);
int array[n];
while(i < n)
{
    scanf("%d", array[i]);
    i++;
}
while(i < n)
{
    printf("%d", array[i]);
}
}