#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define nbr 100
struct election {
    char nom[nbr];
    int vote;

};
struct electeur{
    char cin[nbr];
};
float  Pourcentage(int vote,int nbELecteurs){
return (vote * 100 / nbELecteurs);}


int main(){
    // function pour ajouter les election aprés les  electeur apres une switch cas1:ajouter autre election  
    //case2 : ajouter autre electeur case 3 : 1er tour 
    int nbELecteurs = 0, nbELections = 0;
    struct election electionT1[nbr],electionT2[nbr],electionT3[nbr];
    struct electeur electeur[nbr];
    int nvelection1[nbr],
        nbrt1=0,
        nvelection2[nbr],
        nbrT2=0;
    int bon=0,nbrelct,n,a=0,i=0;
    int v=0;//  verification
    //election
do{
    printf("taper le nombre des elections ");
    scanf("%d",&n);
    }while(n<=5);
// premier remplissage
   do{
    printf("Entrer le nom de %d election \n",nbrt1+1);
    scanf("%s", electionT1[nbrt1].nom);
     nbrt1++;
     if(nbrt1>=5){
     printf("Vous voulez stopper remplissage des elections \n");
            printf("tapper 1 \n");
            printf("tapper une autre numero pour continue \n");
            scanf("%d", &a);

            if (a == 1)break;
            else n++;}
}while(nbrt1<n);

n=0;
//electeur
do{
    printf("taper le nombre des electeur ");
    scanf("%d",&n);
    }while(n<=10);
// premier remplissage
   do{
    printf("Entrer le nom de %d electeur \n",nbrelct+1);
    scanf("%s", electeur[n].cin);
    
     nbrelct++;
     if(nbrelct>=10){
     printf("Vous voulez stopper remplissage des elections \n");
            printf("tapper 1 \n");
            printf("tapper une autre numero pour continue \n");
            scanf("%d", &a);

            if (a == 1)break;
            else n++;}
}while(nbrelct<n);
// votage
void vottage(struct election list[nbr], int c)
    {
        // L'instialisation de vote de table list(presidents)
        // c total de presidents
        for (int i = 0; i < c; i++)
        {
            list[i].vote = 0;
        }

        for (int i = 0; i < nbrelct; i++)
        {
            // lappel de chaque un  electeur pour voter
            

            printf("Bonjour  %s \n", electeur[i].cin);
            //  affiche le menu avec
            for (int b = 0; b < c; b++)
            {
                printf("Pour voter %s tape %d \n", list[b].nom, b + 1);
            }
            int numelection = 0;

            // Verification

             // verifier if lindece is exist
              int v=0;
              do
              {
                if(v > 0)printf("Entre president en dependant la list : \n");
                scanf("%d", &numelection);
                v++;
              }
              while (numelection <=0 || numelection > c);







            list[i - 1].vote++;
        }
    }









}