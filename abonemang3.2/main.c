#include <stdio.h>
#include <stdlib.h>

int main()
{

    int minuter; // Mina variabler
    /* Skriver ut det som står i printf parantesen.*/
    printf("Hur många minuter kommer du att ringa för?\n");
    scanf("%d", &minuter);// Skriver indata till minuter variabeln av användaren.
    /* Om minuter är lika med mindre än 33 så ska man köpa kontantkort.*/
    if(minuter < 33){
        /* Ifall det övre stämmer skriver man ut på skärmen det som står under.*/
        printf("Du borde kopa kontantkort\n");
    }
    /*Annars om minuter variabeln är mindre än 66 minuter. Så borde man köpa normalkortet.*/
    else if(minuter < 66){
        /* Skriver ut att man borde köpa normalkort ifall det övre stämmer överens.
        Som är ett else if program i programmet. Som kallas asken.*/
        printf("Du borde kopa normal");
    }
    /* Annars händer else satsen som alltid kommer att hända ifall ingen av
    if eller else satsen är sanna.*/
    else
        printf("Du borde kopa plus");

        return 0; // Returnerar ett heltal integer.

}
