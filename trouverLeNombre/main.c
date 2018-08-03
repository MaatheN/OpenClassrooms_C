#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int nombreMystere;
int compteur =1;
int proposition =0;
unsigned long dif =0;
void initialisation(){
    dif=0;
    compteur =1;
    printf("\nTaper 1 pour facile.\nTaper 2 pour intermediaire\nTaper 3 pour difficile\nTaper 4 pour tres tres longs\nTaper 5 pour etre respecte\n");
    scanf("%d",&dif);
     if(dif!=1 && dif!=2 && dif!=3 && dif!=4 && dif!=5){
        printf("-ERREUR-\nVeuillez entrer une difficulte entre 1 et 4.");
        main();
     }
     else if(dif==1){
        printf("FACILE\n");
        dif=100;
    }
    else if(dif==2){
        printf("INTERMEDIARE\n");
        dif=1000;
    }
    else if(dif==3){
        printf("DIFFICILE\n");
        dif=10000;
    }
    else if(dif ==4){
        printf("BON COURAGE\n_______________________\nHigh Scores:\n_______________________\n1.Senpai 14 coups\n2.Resh 15 coups\n\n");
        dif=100000;
    }
    else if(dif ==5){
        printf("\nA demain :P\n_______________________\nHigh Scores:\n_______________________\n1.Peut etre toi\n");
        dif=999999999;
    }
    printf("Initialisation...");
    printf("\nGeneration d'un nombre aleatoire entre 0 et %d...", dif);
    const int MAX = dif, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
}
void corpsJeux(){
    for(proposition ; proposition!=nombreMystere ; compteur++){
        printf("\nentrer une proposition:");
        scanf("%d",&proposition);
        if(proposition==nombreMystere){
            printf("You win!\n\n");
            printf("Bravo, vous avez trouve le nombre mystere en %d coups!\n\n",compteur);
            return 0;
        }
        else if(proposition>nombreMystere){
            printf("Trop grand!");
        }
        else{
            printf("Trop petit!");
        }
    }
}
int main()
{
    int reload = 1;
    while(reload){
        printf("\nMENU DIFFICULTE:\n");
        initialisation();
        corpsJeux();
        printf("Pour rejouer taper 1\nPour eteindre le jeux taper 0 + n'importe quelle touche.\n");
        scanf("%d",&reload);
        if(reload!=1 && reload!=0){
            printf("Entree incorrecte. Pour continuer taper 1\nPour eteindre le jeux taper 0 + n'importe quelle touche.\n1 ou 0:");
            scanf("%d", &reload);
        }
    }
    return 0;
}
