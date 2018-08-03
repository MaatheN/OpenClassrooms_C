// UPGRADE : RAJOUTER UN CHRONO HIHI
#include <stdio.h>
#include <stdlib.h>
int launch(int *tableDe);
int ligneTable(int *tableDe,int *steps, int *reponse);
int continuer(int boule);

// LANCEMENT DU JEU
int launch(int *tableDe){
    printf("\nSelectionner la table que vous voulez travailler aujourd'hui:");
    scanf("%d",&*tableDe);
    if(*tableDe<1 && *tableDe >10){
        printf("\nSelectionner une entree entre 2 et 10:");
        main();
    }
    return *tableDe;
}
//GENERATION DE LA TABLE DEMANDEE
int ligneTable(int *tableDe,int *steps, int *reponse){
    printf("\n%d * %d =",*tableDe,*steps);
    scanf("%d",&*reponse);
    return *reponse;
}
// RELOAD
int continuer(int boule){
    do{
       printf("Bravo! Pour continuer le travail, taper 1.\nPour quitter le centre d'entrainement, taper 0 plus n'importe quelle touche.\nchoix:");
       scanf("%d",&boule);
       while(boule!=1 && boule!=0){
        printf("\nMauvaise entree. Saisire 1 pour continuer, 0 pour sortir:");
       }
       if(boule==0){
        printf("A la prochaine");
        return 0;
       }
       else{
           printf("Bon courage!");
           main();
       }
    }while(boule==1);
}
int main()
{
    int reload =1;
    int  numTable=0;
    int *pointeurNumTable = &numTable;
    int i=1;
    int *steps=&i;
    int reponse = 0;
    int *pointeurReponse = &reponse;
    printf("\nBienvenue dans le centre d'entrainement \nde tables de multiplication!\n_______________________________");
    launch(pointeurNumTable);
    for(i;i<11;i++){
        ligneTable(pointeurNumTable,steps,pointeurReponse);
        if(*pointeurReponse!=(*pointeurNumTable)*i){
            printf("mauvaise reponse. Recommencer pour reussir dans l effort!");
            main();
        }
    }
    continuer(reload);
    printf("numTable = %d", *pointeurNumTable);
    return 0;
}
