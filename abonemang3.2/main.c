#include <stdio.h>
#include <stdlib.h>

int main()
{

    int minuter; // Mina variabler
    /* Skriver ut det som st�r i printf parantesen.*/
    printf("Hur m�nga minuter kommer du att ringa f�r?\n");
    scanf("%d", &minuter);// Skriver indata till minuter variabeln av anv�ndaren.
    /* Om minuter �r lika med mindre �n 33 s� ska man k�pa kontantkort.*/
    if(minuter < 33){
        /* Ifall det �vre st�mmer skriver man ut p� sk�rmen det som st�r under.*/
        printf("Du borde kopa kontantkort\n");
    }
    /*Annars om minuter variabeln �r mindre �n 66 minuter. S� borde man k�pa normalkortet.*/
    else if(minuter < 66){
        /* Skriver ut att man borde k�pa normalkort ifall det �vre st�mmer �verens.
        Som �r ett else if program i programmet. Som kallas asken.*/
        printf("Du borde kopa normal");
    }
    /* Annars h�nder else satsen som alltid kommer att h�nda ifall ingen av
    if eller else satsen �r sanna.*/
    else
        printf("Du borde kopa plus");

        return 0; // Returnerar ett heltal integer.

}
