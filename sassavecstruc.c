#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define max 100
struct prisedent{
    int id_pr;
    char nom_pr[50];
    int vot1_pr;
    int vot2_pr;
    int vot3_pr;
};
struct electeur{
    char cin[9];

};

int main(){
int k,i,j,c=0,nbp=max,nbe=max,n;
float pourcentage;

char * nom,y;
char cinscanf[50];
// list_pr[nbp] =remplir la 1er lis || nv_listepr[nbp]=remplir la 2eme liste pour la 2 eme tour
struct prisedent    list_pr[nbp],
             nv_listepr[nbp];
//liste pour les electeurs
struct electeur list_elect[nbe];



//1er do bach n3awdo l vote ila khrjolna nfs l,pourcentage
do{
    //2eme do remplire la liste des prise sup a 5
do{
printf("\ntaper le nombre initiale de la liste des prisédent supérieur ou égale a 5");
scanf("%d",&nbp);
}while(nbp<5);
for(i=0;i<nbp;i++){
    printf("\n%d - le nome de président est:",i+1);
        list_pr[i].id_pr=i;
    scanf("%s",list_pr[i].nom_pr);
    
    list_pr[i].vote1=0;
    
}
do{
printf("\ntaper le nombre initiale de la liste des électeurs supérieur  10");
scanf("%d",&nbe);
}while(nbe>10);
for(i=0;i<nbe;i++){
    printf("\n%d - le CIN d'électeur est:",i+1);
    scanf("%s",&nom);
    for(j=0;j<i;j++){
        if(strcmp(list_pr[j].cin,cinscanf)==0){
            printf("déja existe");
            i--;
        }
        else{
            strcpy(list_pr[i].cin,cinscanf);
        }
    }
    
}



//VOTE 1
 printf("VOT1 :\n");
for(i=0;i<nbe;i++){
    printf("l'électeur de CIN %s vous voté au ",list_elect[i].cin);
    for(j=0;j<nbp;j++){
        printf("%d - %s",i+1,list_pr[i].nom_pr);
       
    } 
    scanf("%d",&n);
    if(n>1 && n>nbp){
    k=n-1;
     list_pr[k].vot1_pr+=1;
     }
}
    printf("\npourcentage des votes: ");
    for(i=0;i<nbp;i++){
        j=-1;//bach n3rf chhal khasni mn case l nv liste_pr
        pourcentage=(list_pr[k].vot1_pr*100)/nbe;
        
        printf("\nle pourcentage de  président %s est :%.2f ",list_pr[i].nom_pr,pourcentage);
        if(pourcentage>=0.15){
            
            j++;
            
            nv_listepr[j]=list_pr[i];
        }// nvlist feha ghir les pourcentage ghadi nder struct bach nbqa n3merhom bjuj 
        //tri a bulle
        for(i=0;i<j;i++){
            for(k=0;k<j;k++){
                if(nv_listepr[k].vote1>nv_listepr[k+1].vote1){
                    y=nv_listepr[k+1];
                    nv_listepr[k+1]=nv_listepr[k];
                    nv_listepr[k]=y;
                }
            }
        }// nt2kdo wach nvlist mtsawya
        if(nv_listepr[0].vote1!=nv_listepr[j].vote1){
            c=1;
        }
    }

}while(c=0);



return 0;
























}




