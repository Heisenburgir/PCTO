#include <stdio.h>
#include <string.h>
int main()
{
int x;
int a;
printf("inserisci l'ambito di lavoro che ti interessa(1 per informatico, 2 per medico)\n");
scanf("%d", &x);
if(x == 1)
{
printf("scegli con un numero la domanda che ti interessa\n Perchè vuoi lavorare per noi?(1)\n Lavori meglio da solo o in team? (2)\n");
scanf("%d", &a);
if(a == 1)
{
    printf("Cerca di non dare risposte banali come ad esempio la ricerca di soldi,\n prima del colloquio informati sull'azienda e prendi spunti da quella ricerca per fornire una risposta interessante e che lasci una buona impressione di te.\n");
}
else if(a == 2)
{
    printf("In questa situazione è meglio rispondere di essere capaci di lavorare in team ma anche di saper lavorare da sé\n");
}
}
    
else if(x == 2)
{
    printf("scegli con un numero la domanda che ti interessa\n Come fai a collaborare con gli altri medici ed infermieri?(1)\nDescrivi il tuo modo di collaborare con i pazienti.(2)\n");
    scanf("%d", &a);
    if(a == 1)
{
    printf("In questo caso la risposta deve essere molto semplice, ovvero che tratti tutti i tuoi colleghi con rispetto\n");
}
else if(a == 2)
{
    printf("La relazione con i pazienti è professionale ma bisogna essere in grado di comunicare buone e cattive notizie anche ai familiari di questi,\n dimostra di essere in grado di semplificare concetti che possono risultare complessi e di controllare le tue emozioni\n");
}
else
{
    printf("numero non idoneo\n");
}
}
else
{
    printf("numero non idoneo\n");
}

}