int main()
{
    int desordre[4]={15, 81, 22, 13};
    int reponse=2;
    printf("Bonjour, \nje vais ranger dans l'ordre croissant le tableau suivant: ");
    afficherTabl(desordre,4);
    ordonnerTableau(desordre,4);
    printf("\nTermine!\n Voici le resultat: ");
    afficherTabl(desordre,4);
    printf("\nVoulez-vous que je range un  autre tableau?\nSi oui, taper 1.\nPour quitter, taper 0 + n'importe quelle touche.\n");
    scanf("%d", &reponse);
    userRestart(reponse);
    //userLaunch();
    return 0;

}
