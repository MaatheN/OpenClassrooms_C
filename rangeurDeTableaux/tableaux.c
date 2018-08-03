void afficherTabl(int tabl[],int tail){
    for(int i=0;i<tail;i++){
        printf("%d ",tabl[i]);
    }
}

void ordonnerTableau(int tClasse[], int longTableau){
    for(int r=0;r<longTableau;r++){
        //printf("\nRELOAD n:%d", r);
        for(int a=0;a<longTableau-1;a++){
            int b=a+1;
            //printf("\na=%d et b=%d: ",a,b);
            if(tClasse[a]>tClasse[b]){
                //printf("\nEchange en cours...\n");
                    //ECHANGER LES INDICES:
                int nouveauPi=tClasse[b];
                int nouveauGi=tClasse[a];
                tClasse[a]=nouveauPi;
                tClasse[b]=nouveauGi;
            }
            //afficherTabl(tClasse,4);
        }
    }
}
int userRestart(int reload){
    while(reload!=0 && reload!=1){
        printf("\nReponse incorrecte.\nTaper 0 ou 1:");
        scanf("%d",&reload);
        userRestart(reload);
    }
    if(reload==1){
        userLaunch();
    }
    else if(reload==0){
        printf("\nAurevoir");
        return 0;
    }
}
void userLaunch(){
    int longTablUser;
    int navetteValeur=0;
    printf("Super!\nQuelle est la taille du tableau?\n");
    scanf("%d",&longTablUser);
    int tablUser[longTablUser];
    for(int v =0;v<longTablUser;v++){
        printf("Valeur numero %d:",v);
        scanf("%d",&navetteValeur);
        tablUser[v]=navetteValeur;
    }
    ordonnerTableau(tablUser,longTablUser);
    afficherTabl(tablUser,longTablUser);
    printf("Encore besoin de moi? Si oui, taper 1 sinon 0 pour quitter.");
    int rep =2;
    scanf("%d",&rep);
    userRestart(rep);
}
