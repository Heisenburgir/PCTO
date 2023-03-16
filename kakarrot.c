#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    printf("inserisci un numero ");
    scanf("%d", &n);
    int array[n];
    int min;
    int max;

    while(i < n)
    {
        printf("inserisci numero ");
        scanf("%d", &array[i]);
        i++;
    }
    i = 1;
    min = array[0];
    max = array[0];
    while(i < n)
    {
        if(array[i] < min)
        {
            min = array[i];
        }

        else if (array[i]>max)
        {
            max = array[i];
        }
        i++;
    }
    printf("il numero più piccolo è %d mentre quello più grande è %d\n", min, max);
  
}