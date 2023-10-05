#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int nombre(){
    srand(time(NULL));
    int randomNumber = rand() % 2 ;
    return randomNumber;
}

int main() {
    int sommeTotal = 100;
    int sommeParier = 0;
    int play;

    play = nombre();

    printf("Saisissez 1 pour jouer ou 2 pour se retirer:\n");
    scanf("%d", &play);

    if(play == 1 ){
        printf("Choisir la somme que vous voulez parier:\n");
        scanf("%d", &sommeParier);
    } if(sommeParier > sommeTotal){
        printf("Impossible car plus ou pas assez d argent");
    }else {
        sommeTotal = sommeTotal - sommeParier;
        int randomnumber = nombre();
        if (randomnumber == 0){
            printf("Vous avez perdu, il vous reste: %d\n", sommeTotal);
        }else{
            sommeTotal += sommeParier * 2;
            printf("Bravo vous avez gagner, il vous reste: %d", sommeTotal);
        }

    }
    if(play == 2){
        printf("Vous vous etes retire, il vous reste: %d\n", sommeTotal);
    }
    return 0;
}
