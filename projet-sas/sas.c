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
struct joueurs joueur[100];
int indice = 0;
int id = 1;
struct joueurs ajout()
{
    int p;
    struct joueurs j;
    j.id = id;
    printf("saisis le nom du joueur :");
    scanf("%s", j.nom);
    printf("saisis le prenom du joueur :");
    scanf("%s", j.prenom);
    printf("saisis le numero du maillot du joueur :");
    scanf("%d", &j.nummaillot);
    printf("saisis l'age du joueur :");
    scanf("%d", &j.age);
    printf("saisis le nombre des buts du joueurs :");
    scanf("%d", &j.buts);
Poste:
    printf("choisir le poste du joueur :\n");
    printf("1 = guardien ||  2 = defenseur || 3 = milieu ||  4 = attaquant ");
    scanf("%d", &p);
    switch (p)
    {
    case 1:
        strcpy(j.poste, "guardien");
        break;
    case 2:
        strcpy(j.poste, "defenseur");
        break;
    case 3:
        strcpy(j.poste, "milieu");
        break;
    case 4:
        strcpy(j.poste, "attaquant");
        break;
    default:
        printf("Le nombre que vous avez saisis ne correspond a aucun des postes 'Ressayez' ");
        goto Poste;
    }
    return j;
}
void trinom()
{
    struct joueurs j1;
    int i, compteur = 0;
    do
    {
        compteur = 0;
        for (i = 0; i < indice - 1; i++)
        {
            if (strcmp(joueur[i].nom, joueur[i + 1].nom) > 0)
            {
                j1 = joueur[i];
                joueur[i] = joueur[i + 1];
                joueur[i + 1] = j1;
                compteur++;
            }
        }
    } while (compteur != 0);
}
void triposte()
{
    struct joueurs j1;
    int i, compteur = 0;
    do
    {
        compteur = 0;
        for (i = 0; i < indice - 1; i++)
        {
            if (strcmp(joueur[i].poste, joueur[i + 1].poste) > 0)
            {
                j1 = joueur[i];
                joueur[i] = joueur[i + 1];
                joueur[i + 1] = j1;
                compteur++;
            }
        }
    } while (compteur != 0);
}
void triage()
{
    struct joueurs j1;
    int i, compteur = 0;
    do
    {
        compteur = 0;
        for (i = 0; i < indice - 1; i++)
        {
            if (joueur[i].age > joueur[i + 1].age)
            {
                j1 = joueur[i];
                joueur[i] = joueur[i + 1];
                joueur[i + 1] = j1;
                compteur++;
            }
        }
    } while (compteur != 0);
}
int rechercheid(int re)
{
    int i , answer = -1;
    for (i = 0; i < indice; i++)
    {
        if (joueur[i].id == re)
        {
            answer = i;
            return answer;
        }
    }
    return answer;
}
int recherchenom(char ser[])
{
    int i, answer = -1;
    for (i = 0; i < indice; i++)
    {
        if (strcmp(joueur[i].nom, ser) == 0)
        {
            answer = i;
            return answer;
        }
    }
    return answer;
}

void modificationposte(int adresse)
{
    int p;
Poste:
    printf("choisir le poste du joueur :\n");
    printf("1 = guardien ||  2 = defenseur || 3 = milieu ||  4 = attaquant ");
    scanf("%d", &p);
    switch (p)
    {
    case 1:
        strcpy(joueur[adresse].poste, "guardien");
        break;
    case 2:
        strcpy(joueur[adresse].poste, "defenseur");
        break;
    case 3:
        strcpy(joueur[adresse].poste, "milieu");
        break;
    case 4:
        strcpy(joueur[adresse].poste, "attaquant");
        break;

    default:
        printf("ce choix ne correspond a aucun des postes !! 'Ressayez'\n");
        goto Poste;
        break;
    }
}
void modificationage(int adresse)
{

    printf("saisis l'age du joueur :\n");
    scanf("%d", &joueur[adresse].age);
}
void modificationbuts(int adresse)
{
    printf("saisis les buts du joueur :\n");
    scanf("%d", &joueur[adresse].buts);
}
void affichageu(int k)
{
    printf("Id : %d Nom : %s\t%s || Poste :%s || Numero : %d || Age :%d ans || Butes :%d \n", joueur[k].id, joueur[k].nom, joueur[k].prenom, joueur[k].poste, joueur[k].nummaillot, joueur[k].age, joueur[k].buts);
}
void affichage()
{
    int j;
    for (j = 0; j < indice; j++)
    {
        printf("Id : %d Nom : %s\t%s || Poste :%s || Numero : %d || Age :%d ans || Butes :%d \n", joueur[j].id , joueur[j].nom, joueur[j].prenom, joueur[j].poste, joueur[j].nummaillot, joueur[j].age, joueur[j].buts);
    }
}
void menurecherche()
{
    
        printf("\n----- Menu de recherche -----\n");
        printf("1- rechercher par identifient \n");
        printf("2 -rechercher par nom \n");
        printf("0- retour au menu principale \n");
}

int main()
{

    int choix, n, i, choix1, choix2, pos, choix3, max = 0, min = 0, p = 0, cmp, buts, idsupp, supp = 0, poste, som = 0, sr, agemin, agemax, a;
    char search[20];
    do
    {
    Menu:
        printf("\n--------  Menu  --------\n");
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
            do
            {
            Ajout:
                printf("\n--- Menu d'ajout des joueurs ---\n");
                printf("1- Ajouter un seul joueur :\n");
                printf("2- Ajouter plusieurs joueurs :\n");
                printf("0- Retour au menu principal :\n");
                scanf("%d", &choix1);
                switch (choix1)
                {
                case 1:
                    joueur[indice] = ajout(indice, id);
                    indice++;
                    id++;
                    break;

                case 2:
                    printf("saisis le nombre des joueurs que vous voulez ajouter :");
                    scanf("%d", &cmp);
                    for (i = indice; i < indice + cmp; i++)
                    {
                        joueur[i] = ajout(i, id);
                        id++;
                    }
                    indice += cmp;
                    goto Ajout;
                    break;
                case 0:
                    goto Menu;

                default:
                    printf("le choix vous avez entrez n'est pas disponible !!!'Ressayez'\n");
                    goto Ajout;
                }
            } while (choix1 != 0);
            break;
        case 2:
            do
            {

                printf("\n--- Menu d'affichage ---\n");
                printf("1- Afficher suivant l'ordre alphabétique des Noms \n");
                printf("2- Aficher suivant l'age \n");
                printf("3- Afficher suivant les postes \n");
                printf("0- Retour au menu principal :\n");
                scanf("%d", &choix1);
                switch (choix1)
                {
                case 1:
                    if (indice > 1)
                    {
                        trinom();
                        printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                        affichage();
                    }
                    else
                    {
                        printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                        affichage();
                    }
                    break;
                case 2:
                    if (indice > 1)
                    {
                        trinom();
                        triage();
                        printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                        affichage();
                    }
                    else
                    {
                        printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                        affichage();
                    }
                    break;
                case 3:
                    if (indice > 1)
                    {
                        trinom();
                        triposte();
                        printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                        affichage();
                    }
                    else
                    {
                        printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                        affichage();
                    }
                    break;
                case 0:
                    goto Menu;
                default:
                    printf("Votre choix n'est pas disponible dans le Menu d'affichage !!! \n");
                    break;
                }
            } while (choix1 != 0);
        case 3:
            do
            {
                printf("\n----- Menu de modification -----\n");
                printf("1- Modifier le poste du joueur \n");
                printf("2 -Modifier l'age du joueur \n");
                printf("3- Modifier les buts du joueurs \n");
                printf("0- retour au menu principale \n");
                scanf("%d", &choix1);
                switch (choix1)
                {
                case 1:
                    do
                    {
                        menurecherche();
                        scanf("%d", &choix2);
                        switch (choix2)
                        {
                        case 1:
                            printf("saisis l'identifiant du joueur à rechercher :");
                            scanf("%d", &sr);
                            if (rechercheid(sr) == -1)
                            {
                                printf("Le joueur ne fait pas partie de l'equipe ");
                            }
                            else
                            {
                                printf("le joueur fait partie de l'equipe :");
                                modificationposte(rechercheid(sr));
                            }
                            break;
                        case 2:
                            printf("saisis le nom du joueur à rechercher :");
                            scanf("%s", search);
                            if (recherchenom(search) == -1)
                            {
                                printf("Le joueur ne fait pas partie de l'equipe ");
                            }
                            else
                            {
                                printf("le joueur fait partie de l'equipe :");
                                modificationposte(recherchenom(search));
                            }
                            break;
                        case 0:
                            goto Menu;
                            break;
                        default:
                            printf("Votre choix n'est pas disponible dans le Menu de recherche !!!");
                            break;
                        }
                    } while (choix2 != 0);
                case 2:
                    do
                    {
                        menurecherche(joueur, indice);
                        scanf("%d", &choix2);
                        switch (choix2)
                        {
                        case 1:
                            printf("saisis l'identifiant du joueur à rechercher :");
                            scanf("%d", &sr);
                            if (rechercheid(sr) == -1)
                            {
                                printf("Le joueur ne fait pas partie de l'equipe ");
                            }
                            else
                            {
                                printf("le joueur fait partie de l'equipe :");
                                modificationage(rechercheid(sr));
                            }
                            break;
                        case 2:
                            printf("saisis le nom du joueur à rechercher :");
                            scanf("%s", search);
                            if (recherchenom(search) == -1)
                            {
                                printf("Le joueur ne fait pas partie de l'equipe ");
                            }
                            else
                            {
                                printf("le joueur fait partie de l'equipe :");
                                modificationage(recherchenom(search));
                            }
                            break;
                        case 0:
                            goto Menu;
                            break;
                        default:
                            printf("Votre choix n'est pas disponible dans le Menu de recherche !!!");
                            break;
                        }
                    } while (choix2 != 0);
                case 3:
                    do
                    {
                        menurecherche();
                        scanf("%d", &choix2);
                        switch (choix2)
                        {
                        case 1:
                            printf("saisis l'identifiant du joueur à rechercher :");
                            scanf("%d", &sr);
                            if (rechercheid(sr) == -1)
                            {
                                printf("Le joueur ne fait pas partie de l'equipe ");
                            }
                            else
                            {
                                printf("le joueur fait partie de l'equipe :");
                                modificationbuts(rechercheid(sr));
                            }
                            break;
                        case 2:
                        printf("saisis le nom du joueur à rechercher :");
                        scanf("%s", search);
                            if (recherchenom(search) == -1)
                            {
                                printf("Le joueur ne fait pas partie de l'equipe ");
                            }
                            else
                            {
                                printf("le joueur fait partie de l'equipe :");
                                modificationbuts(recherchenom(search));
                            }
                            break;
                        case 0:
                            goto Menu;
                            break;
                        default:
                            printf("Votre choix n'est pas disponible dans le Menu de recherche !!!");
                            break;
                        }
                    } while (choix2 != 0);
                default:
                    printf("Votre choix n'est pas disponible dans le Menu de modification !!!");
                    goto Menu;
                }
                break;
            } while (choix1 != 0);
        case 4:
            printf("saisis l'identifiant du joueur à supprimer :");
            scanf("%d", &sr);
            pos=rechercheid(sr);
            if (pos == -1)
            {
                printf("L'id que vous avez saisis nr convient a aucun des joueurs 'Ressayez' \n");
                break;
            }
            else
            {
                for (i = pos; i < indice - 1; i++)
                {
                    joueur[i] = joueur[i + 1];
                }
                indice--;
            }
            break;
        case 5:
            do
            {
                menurecherche();
                scanf("%d", &choix1);
                switch (choix1)
                {
                case 1:
                    printf("saisis l'identifiant du joueur à rechercher :");
                    scanf("%d", &sr);
                    if (rechercheid(sr) == -1)
                    {
                        printf("Le joueur ne fait pas partie de l'equipe ");
                    }
                    else
                    {
                        printf("le joueur fait partie de l'equipe :");
                        affichageu(rechercheid(sr));
                    }
                    break;
                case 2:
                    printf("saisis le nom du joueur à rechercher :");
                    scanf("%s", search);
                    if (recherchenom(search) == -1)
                    {
                        printf("Le joueur ne fait pas partie de l'equipe ");
                        break;
                    }
                    else
                    {
                        printf("le joueur fait partie de l'equipe :");
                        affichageu(recherchenom(search));
                        break;
                    }
                    break;
                case 0:
                    goto Menu;
                    break;
                default:
                    printf("Votre choix n'est pas disponible dans le Menu de recherche !!!\n");
                    break;
                }
            } while (choix1 != 0);
            break;
        case 6:
            do
            {
                printf("\n----- Menu des statistiques -----\n");
                printf("1- Afficher le nombre total de joueurs dans l'equipe \n");
                printf("2 -Afficher l'age moyen des joueurs \n");
                printf("3- Afficher les joueurs ayant marque plus de X buts \n");
                printf("4 -Afficher le meilleur buteur \n");
                printf("5 -Afficher le joueur le plus jeune et le plus agé \n");
                printf("0- retour au menu principale \n");
                scanf("%d", &choix1);
                switch (choix1)
                {
                case 1:
                    printf("Le nombres total des joueurs dans l'équipe est :%d", indice );
                    break;
                case 2:
                    for (i = 0; i < indice; i++)
                    {
                        som += joueur[i].age;
                    }
                    som = som / (indice);
                    printf("l'age moyen des joueurs dans l'equipe est : %d", som);
                    break;
                case 3:
                    printf("saisis le nombre des buts :");
                    scanf("%d", &buts);
                    for (i = 0; i < indice; i++)
                    {
                        if (joueur[i].buts > buts)
                        {
                            affichageu(i);
                        }
                    }
                    break;
                case 4:
                    for (i = 0; i < indice; i++)
                    {
                        if (joueur[i].buts > max)
                        {
                            max = joueur[i].buts;
                            p = i;
                        }
                    }
                    if (max > 0)
                    {
                        printf("Le meilleur buteur de l'equipe est :\n");
                        affichageu(p);
                    }
                    break;
                case 5:
                    agemin=joueur[0].age;
                    agemax=joueur[0].age;
                    for(i = 0; i < indice; i++)
                    {
                        if (joueur[i].age > agemax)
                        {
                            agemax = joueur[i].age;
                            max = i;
                        }
                        if (joueur[i].age < agemin)
                        {
                            agemin = joueur[i].age;
                            min = i;
                        }
                    }
                    printf("Le joueur le plus age est :\n");
                    affichageu(max);
                    printf("Le joueur le plus jeune est :\n");
                    affichageu(min);
                    break;
                case 0:
                    goto Menu;
                    break;
                default:
                    printf("Le choix que vous avez saisis ne convient a aucun des choix afficher dans le Menu des statistiques !!!\n");
                    break;
                }
            } while (choix1 != 0);
            break;
        default:
            printf("Le choix que vous avez saisis ne convient a aucun des choix afficher dans le Menu !!!\n");
            goto Menu;
        }
    } while (choix != 0);
}