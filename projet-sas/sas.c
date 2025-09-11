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

struct joueurs ajout(int indice){
            int p;
            struct joueurs j;
                j.id = indice;
                indice++;
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
                Poste :
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
                default :
                    printf("Le nombre que vous avez saisis ne correspond a aucun des postes 'Ressayez' ");
                    goto Poste;
                }
                return j; 
}
void trinom(struct joueurs joueur[],int indice)
{
    int c,m,compteur;
    struct joueurs j1;
    for(c=0;c<compteur+c;c++){
        int compteur=0;
        for(m=0;m<indice-1;m++){
            if (strcmp(joueur[m].nom[0] , joueur[m+1].nom[0])>0)
            {
                j1 = joueur[m];
                joueur[m] = joueur[m + 1];
                joueur[m + 1] = j1;
                compteur++;
            }
        }
    }
}
void triposte(struct joueurs joueur[], int indice)
{
    int i,g,m,a,d,j,cmp=0;
    struct joueurs j1;
    do{
    for (i = 1; i < g+i; i++)
    {
        g=0;
        if (strcmp(joueur[i - 1].poste, "guardien")==0)
        {
            j1=joueur[j];
            for( j=i ; j>0 ; j-- ){
                joueur[j]=joueur[j-1];
            }
            joueur[j] = j1;
            g++;
            cmp++;
        }
    }
    } while (g!=0);
    do{
    for (i = cmp; i < d+i; i++)
    {
        d=0;
        if (strcmp(joueur[i - 1].poste, "guardien")==0)
        {
            j1=joueur[j];
            for( j=i ; j>0 ; j-- ){
                joueur[j]=joueur[j-1];
            }
            joueur[j] = j1;
            g++;
            cmp++;
        }
        }
        } while (d!=0);
        do{
            for (i = cmp; i < d+i; i++)
            {
                d=0;
                if (strcmp(joueur[i - 1].poste, "guardien")==0)
                {
                    j1=joueur[j];
                    for( j=i ; j>0 ; j-- ){
                        joueur[j]=joueur[j-1];
                    }
                    joueur[j] = j1;
                    g++;
                    cmp++;
                }
            }
        } while (d!=0);
    // hna wsselt
}

void triage(struct joueurs joueur[], int indice)
{
    int i, cmp, j;
    struct joueurs j1;
    
    for (i = 0; i < cmp + i; i++)
    {
        cmp = 0;
        for (j = 0; j < indice - 1; j++)
        {
            if (joueur[j].age > joueur[j + 1].age)
            {
                j1 = joueur[j];
                joueur[j] = joueur[j + 1];
                joueur[j + 1] = j1;
                cmp++;
            }
        }
    }
}
int rechercheid (struct joueurs joueur[],int indice){
    int sr, i, answer=1212;
    printf("saisis l'identifiant du joueur à rechercher :");
    scanf("%d", &sr);         
    for (i = 0; i < indice; i++)
    {
        if (joueur[i].id == sr){
            answer=i;
        }
    }
    return answer;
}
int recherchenom (struct joueurs joueur[],int indice){
    int sr, i, answer=1212;
    printf("saisis le nom du joueur à rechercher :");
    scanf("%s", sr);
    for (i = 0; i < indice; i++)
    {
        if (strcmp(joueur[i].id , sr)==0){
            answer=i;
        }
    }
    return answer;
}

int modification(struct joueurs joueur[],int indice){
    int k,p;
    Poste:
    printf("choisir le poste du joueur :\n");
    printf("1 = guardien ||  2 = defenseur || 3 = milieu ||  4 = attaquant ");
    scanf("%d", &p);
    switch (p)
    {
    case 1:
        strcpy(joueur[k].poste, "guardien");
        break;
    case 2:
        strcpy(joueur[k].poste, "defenseur");
        break;
    case 3:
        strcpy(joueur[k].poste, "milieu");
        break;
    case 4:
        strcpy(joueur[k].poste, "attaquant");
        break;

    default:
        printf("ce choix ne correspond a aucun des postes !! 'Ressayez'");
        goto Poste;
        break;
    }
}
void affichage(struct joueurs joueur[] ,int indice){
    int j;
    for(j=0;j<indice;j++){
        printf("Id : %d\n",joueur[j].id);
        printf("Nom : %s\t%s \n",joueur[j].prenom, joueur[j].nom);
        printf("Poste :%s \n",joueur[j].poste);
        printf("Numero : %d \n",joueur[j].nummaillot);
        printf("Age :%d ans\n",joueur[j].age);
        printf("Butes :%d \n",joueur[j].buts);
    }
}
int main() {

    int choix, n, i, choix1, choix2, choix3, id = 1, cmp, supp = 0, poste, search, sr, indice=0, a;
    printf("Veuillez saisir le nombre max des joueurs dans l'equipe :");
    scanf("%d", &n);
    struct joueurs joueur[100];
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
            printf("\n--- Menu d'ajout des joueurs ---\n");
            printf("1- Ajouter un seul joueur :\n");
            printf("2- Ajouter plusieurs joueurs :\n");
            printf("0- Retour au menu principal :\n");
            scanf("%d", &choix1);
            switch (choix1)
            {
            case 1:
                joueur[indice]=ajout(indice);
                indice++;
                id++;
                break;
            
            case 2:
                Ajout:
                printf("saisis le nombre des joueurs que vous voulez ajouter :");
                scanf("%d", &cmp);
                for (i = indice ; i < indice + cmp ; i++)
                {
                    joueur[i]=ajout(i);
                    id++;
                }
                indice+=cmp;
                break;
            case 0:
                goto Menu;

            default:
                printf("le choix vous avez entrez n'est pas disponible !!!'Ressayez'\n");
                goto Ajout;
            }
        case 2:
            printf("\n--- Menu d'affichage ---\n");
            printf("1- Afficher suivant l'ordre alphabétique des Noms \n");
            printf("2- Aficher suivant l'age \n");
            printf("3- Afficher suivant les postes \n");
            printf("0- Retour au menu principal :\n");
            scanf("%d",&a);
            switch (a)
            {
            case 1:
                trinom(joueur, indice);
                printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                affichage(joueur, indice);
                break;
            case 2:
                triage(joueur, indice);
                printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                affichage(joueur, indice);
                break;
            case 3:
                triposte(joueur, indice);
                printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice);
                affichage(joueur, indice);
                break;
            default:
                printf("\n--- Liste des joueurs dans l'equipe (%d) ---\n", indice); 
                break;
            }
           
        case 3:
            printf("\n----- Menu de modification -----\n");
            printf("1- Modifier le poste du joueur \n");
            printf("2 -Modifier l'age du joueur \n");
            printf("3- Modifier les buts du joueurs \n");
            printf("0- retour au menu principale \n");
            scanf("%d", &choix3);
            switch (choix3)
            {
            case 1:
                printf("\n----- Menu de recherche -----\n");
                printf("1- rechercher par identifient \n");
                printf("2 -rechercher par nom \n");
                printf("0- retour au menu principale \n");
                scanf("%d", &choix2);
                switch (choix2)
                {
                case 1:
                    if(rechercheid(joueur,indice)==1212){
                        printf("Le joueur ne fait pas partie de l'equipe ");
                    }
                    else {
                        printf("le joueur fait partie de l'equipe :");
                        modification(joueur,rechercheid(joueur,indice));
                    }
                    break;
                case 2:
                    if(recherchenom(joueur,indice)==1212){
                        printf("Le joueur ne fait pas partie de l'equipe ");
                    }
                    else {
                        printf("le joueur fait partie de l'equipe :");
                        modification(joueur,rechercheid(joueur,indice));
                    }
                    break;
                case 0:
                    goto Menu;
                    break;
                default:
                    printf("le choix vous avez entrez n'est pas disponible !!!");
                    break;
                }
            case 2:
                printf("\n----- Menu de recherche -----\n");
                printf("1- rechercher par identifient \n");
                printf("2 -rechercher par nom \n");
                printf("0- retour au menu principale \n");
                scanf("%d", &choix2);
                switch (choix2)
                {
                case 1:
                    printf("saisis l'identifiant du joueur à rechercher :");
                    scanf("%d", &sr);
                    for (i = 0; i < id; i++)
                    {
                        if (joueur[i].id == sr)
                        {
                            printf("le joueur fait partie de l'equipe \n");
                            break;
                        }
                        else
                        {
                            printf("Le joueur ne fait pas partie de l'equipe \n");
                            break;
                        }
                    }
                    break;
                case 2:
                    printf("saisis le nom du joueur à rechercher :");
                    scanf("%s", search);
                    for (i = 0; i < id; i++)
                    {
                        if (strcmp(joueur[i].nom, search) == 0)
                        {
                            printf("le joueur fait partie de l'equipe \n");
                            break;
                        }
                        else
                        {
                            printf("Le joueur ne fait pas partie de l'equipe \n");
                            break;
                        }
                    }
                    break;
                case 0:
                    goto Menu;
                    break;

                default:
                    printf("le choix vous avez entrez n'est pas disponible !!!");
                    goto Menu;
                }
                default:
                    printf("le choix vous avez entrez n'est pas disponible !!!");
                    goto Menu;
                }
                break;
        case 4:
            break;
        case 5:
            printf("\n----- Menu de recherche -----\n");
            printf("1- rechercher par identifient \n");
            printf("2 -rechercher par nom \n");
            printf("0- retour au menu principale \n");
            scanf("%d", &choix2);
            switch (choix2)
            {
            case 1:
                if(recherche(joueur,indice)==1212){
                    printf("Le joueur ne fait pas partie de l'equipe ");
                }
                else {
                    printf("le joueur fait partie de l'equipe :");
                    printf("Id : %d\n",joueur[recherche(joueur,indice)].id);
                    printf("Nom : %s\t%s \n",joueur[recherche(joueur,indice)].prenom,joueur[recherche(joueur,indice)].nom);
                    printf("Poste :%s \n",joueur[recherche(joueur,indice)].poste);
                    printf("Numero : %d \n",joueur[recherche(joueur,indice)].nummaillot);
                    printf("Age :%d ans\n",joueur[recherche(joueur,indice)].age);
                    printf("Butes :%d \n",joueur[recherche(joueur,indice)].buts);    
                }
                break;
            case 2:
                printf("saisis le nom du joueur à rechercher :");
                scanf("%s", search);
                for (i = 0; i < id; i++)
                {
                    if (strcmp(joueur[i].nom, search) == 0)
                    {
                        printf("le joueur fait partie de l'equipe :");
                        printf("Id : %d\n",joueur[i].id);
                        printf("Nom : %s\t%s \n",joueur[i].prenom,joueur[i].nom);
                        printf("Poste :%s \n",joueur[i].poste);
                        printf("Numero : %d \n",joueur[i].nummaillot);
                        printf("Age :%d ans\n",joueur[i].age);
                        printf("Butes :%d \n",joueur[i].buts);
                        break;
                    }
                    else
                    {   
                        printf("Le joueur ne fait pas partie de l'equipe ");
                        break;
                    }
                }
                break;
            case 0:
                goto Menu;
                break;
            default:
                printf("le choix vous avez entrez n'est pas disponible !!!");
                break;
            }
            break;
        default:
            ("Le choix que vous avez saisis ne convient a aucun des choix afficher dans le Menu !!!");
        }
    }while (choix != 0);
}
