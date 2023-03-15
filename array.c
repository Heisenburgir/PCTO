#include <stdio.h>
int main()
{
    int x;
    
    printf("inserire un numero: ");
    scanf("%d", &x);
    
    int array[x];
    int i = 0;
    int primo = 2;
    int divisore = 2;
    while (i < x)
    {
        while(primo % divisore != 0 && divisore < primo)
        {
            divisore++;
        }
    	if (divisore == primo)
        {
            array[i] = primo;
            i++;
        }
        primo++;
        divisore = 2;
    } 
    i = 0;
    while (i < x)
    {
        printf("%d\n", array[i]);
        i++;
    }
}
