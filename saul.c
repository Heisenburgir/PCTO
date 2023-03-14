#include <stdio.h>
int main()
{
    int anno;

    printf("In che anno sei nato: ");
    scanf("%d", &anno);
    if(anno == 1969)
    {
        printf ("Sei nato lo stesso anno del primo atterraggio sulla luna\n");
    }
    else if(anno < 1969)
    {
        printf ("Sei nato %d anni prima dello sbarco\n", 1969-anno);
    }
    else
    {
    printf ("Sei nato %d anni dopo lo  sbarco, anche se non l'hai visto con i tuoi occhi non dire che è finto!\n", anno-1969);
    }
}