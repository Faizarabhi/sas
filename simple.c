#include<stdio.h>
#include<stdlib.h>
int main(){
int k,i,c=0,nbp=5,nbe=5;
float pourcentage;

char* list_pr[nbp],list_elect[nbe],nv_listepr[nbp],y;

int vote1[nbp];
//1er do bach n3awdo l vote ila khrjolna nfs l,pourcentage
do{
    //2eme do remplire la liste des prise sup a 5
do{
printf("\ntaper le nombre initiale de la liste des prisédent supérieur ou égale a 5");
scanf("%d",&nbp);
}while(nbp<5);
for(i=0;i<nbp;i++){
    printf("\n%d - le nome de président est:",i+1);
    scanf("%s",list_pr[i]);
    vote1[i]=0;// intialiser le tableau pour ajouter les vote mn b3d
}
do{
printf("\ntaper le nombre initiale de la liste des électeurs supérieur  10");
scanf("%d",&nbe);
}while(nbe>10);
for(i=0;i<nbe;i++){
    printf("\n%d - le CIN d'électeur est:",i+1);
    scanf("%s",list_elect[i]);
}



//VOTE 1
 printf("VOT1 :\n")
for(i=0;i<nbe;i++){
    printf("l'électeur de CIN %s vous voté au ",list_elect[i]);
    for(j=0;j<nbp;j++){
        printf("%d - %s",i+1,list_pr[i]);
       
    } 
    scanf("%d",&n);
    if(n>1 && n>nbp){
    k=n-1;
     vote1[k]+=1;
     }
}
    printf("\npourcentage des votes: ");
    for(i=0;i<nbp;i++){
        j=-1;//bach n3rf chhal khasni mn case l nv liste_pr
        pourcentage=(vote1[i]*100)/nbe;

        printf("\nle pourcentage de  président %s est :%.2f ",list_pr[i],pourcentage);
        if(pourcentage>=0.15){
            j++;
            nv_listepr[j]=list_pr[i];
        }// nvlist feha ghir les pourcentage ghadi nder struct bach nbqa n3merhom bjuj 
        //tri a bulle
        for(i=0;i<j;i++){
            for(k=0;k<j;k++){
                if(nv_listepr[k]>nv_listepr[k+1]){
                    y=nv_listepr[k+1];
                    nv_listepr[k+1]=nv_listepr[k];
                    nv_listepr[k]=y;
                }
            }
        }// nt2kdo wach nvlist mtsawya
        if(nv_listepr[0]!=nv_listepr[j]){
            c=1;
        }
    }


}while(c=0);
}