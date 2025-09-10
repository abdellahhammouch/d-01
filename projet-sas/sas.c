#include <stdio.h>
#include <string.h>

struct joueurs
{
    int id;
    char nom[20];
    char prenom[20];
    int nummaillot;
    char poste[20];
    int age;
    int buts;
};

void main()
{

    int choix, n, i, choix1, id = 0, cmp, supp = 0, poste;
    printf("Veuillez saisir le nombre max des joueurs dans l'equipe :");
    scanf("%d", &n);
    struct joueurs joueur[n];

    do
    {
        printf("\n--- Menu  ---\n");
        printf("1-Ajouter des joueurs \n");
        printf("2-Afficher la liste des joueurs \n");
        printf("3-Modifier un joueur \n");
        printf("4-supprimer un joueur \n");
        printf("5-Rechercher un joueur \n");
        printf("6-Statistiques \n");
        printf("0-Exit \n");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            printf("Vous voulez ajouter un joueur(1) ou plusieurs(2) :");
            scanf("%d", &choix1);
            switch (choix1)
            {
            case 1:
                joueur[id].id = id + 1;

                printf("saisis le nom du joueur :");
                scanf("%s", joueur[id].nom);

                printf("saisis le prenom du joueur :");
                scanf("%s", joueur[id].prenom);

                printf("saisis le numero du maillot du joueur :");
                scanf("%d", &joueur[id].nummaillot);

                printf("saisis l'age du joueur :");
                scanf("%d", &joueur[id].age);

                printf("saisis le nombre des buts du joueurs :");
                scanf("%d", &joueur[id].buts);

                printf("choisir le poste du joueur :\n");
                printf("1 = guardien ||  2 = defenseur || 3 = milieu ||  4 = attaquant ");
                scanf("%d", poste);
                switch (poste)
                {
                case 1:
                    strcpy(joueur[id].poste, "guardien");
                    break;
                case 2:
                    strcpy(joueur[id].poste, "defenseur");
                    break;
                case 3:
                    strcpy(joueur[id].poste, "milieu");
                    break;
                case 4:
                    strcpy(joueur[id].poste, "attaquant");
                    break;

                default:
                    printf("ce choix ne correspond a aucun des postes !!");
                    break;
                }
                id++;

                break;
            case 2:
                printf("saisis le nombre des joueurs que vous voulez ajouter :");
                scanf("%d", &cmp);

                for (i = id; i < id + cmp; i++)
                {

                    joueur[id].id = id + 1;

                    printf("saisis le nom du joueur :");
                    scanf("%s", joueur[id].nom);

                    printf("saisis le prenom du joueur :\n");
                    scanf("%s", joueur[id].prenom);

                    printf("saisis le numero du maillot du joueur :\n");
                    scanf("%d", joueur[id].nummaillot);

                    printf("saisis l'age du joueur :");
                    scanf("%d", joueur[id].age);

                    printf("saisis le nombre des buts du joueurs :\n");
                    scanf("%d", joueur[id].buts);

                    printf("choisir le poste du joueur :\n");
                    printf("1 = guardien ||  2 = defenseur || 3 = milieu ||  4 = attaquant ");
                    scanf("%d", poste);
                    switch (poste)
                    {
                    case 1:
                        strcpy(joueur[id].poste, "guardien");
                        break;
                    case 2:
                        strcpy(joueur[id].poste, "defenseur");
                        break;
                    case 3:
                        strcpy(joueur[id].poste, "milieu");
                        break;
                    case 4:
                        strcpy(joueur[id].poste, "attaquant");
                        break;

                    default:
                        printf("ce choix ne correspond a aucun des postes !!");
                        break;
                    }
                }
                id += cmp;

                break;

            default:
                printf("le choix vous avez entrez n'est pas disponible !!!");
                break;
            }
            break;
        case 2:
            printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", cmp - supp);
            for (i = 0; i < id - supp; i++)
            {

                printf("%d- %s %s \t, %s \t,son numero est : (%d) ,%d ans,%d buts\n", joueur[i].id, joueur[i].prenom, joueur[i].nom, joueur[i].poste, joueur[i].nummaillot, joueur[i].age, joueur[i].buts);
            }
            break;
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
        }

    } while (choix != 0);
}