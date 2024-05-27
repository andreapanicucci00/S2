#include<stdio.h>
#include <unistd.h> 

void SetDomande(){
    char Nick[50];
    int Scelta,Punteggio;
    printf("Inserisci il tuo nome");
    scanf("%s",Nick);
    Punteggio = 0;
    /* Domanda 1 */
    printf("Di che colore è il cielo?\n");
    printf("1) blu\n");
    printf("2) rosso\n");
    printf("3) verde\n");
    scanf("%d", &Scelta);
    if (Scelta == 1) {
        Punteggio = Punteggio + 1;
        printf("Corretto! Il tuo attuale punteggio e': %d\n", Punteggio);
    } else if (Scelta != 1) {
        printf("Risposta sbagliata\n");
    }
    /* Domanda 2 */
    printf("Come si chiama il cane di shaggy?\n");
    printf("1) jhoonny\n");
    printf("2) rocky\n");
    printf("3) Tex\n");
    scanf("%d", &Scelta);
    if (Scelta == 3) {
        Punteggio = Punteggio + 1;
        printf("Corretto! Il tuo attuale punteggio e': %d\n", Punteggio);
    } else if (Scelta != 3) {
        printf("Risposta sbagliata\n");
    }
    /* Domanda 3 */
    printf("Di quale colore è l'icona di facebook?\n");
    printf("1) gialla e rossa\n");
    printf("2) blu e bianca\n");
    printf("3) nera e bianca\n");
    scanf("%d", &Scelta);
    if (Scelta == 2) {
        Punteggio = Punteggio + 1;
        printf("Corretto! Il tuo attuale punteggio e': %d\n", Punteggio);
    } else if (Scelta != 2) {
        printf("Risposta sbagliata\n");
    }
     printf("Grazie per aver giocato con noi %s. Il tuo punteggio e': %d\n", Nick, Punteggio); 
}

int main(){
    /* Introduzione */
    printf("Benvenuto in questo quiz: \n");
    /* Selezione avvio del gioco */
    int selezione = 0;
    printf("Seleziona il tasto 1 per iniziare a giocare, seleziona il tasto 2 per uscire\n");
    scanf("%d", &selezione);
    if (selezione == 1) {
        SetDomande();
    } else if (selezione == 2) {
        printf(":(\n");
    }
    sleep(5);
    return 0;
}