#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct client
{
char cin[50];
char nom[50];
float montant;
 } clt;
int i, j;
int nombredeclt = 0;
clt client[10], tmpo;

void menu (){
  printf
    ("\n\t\t\t\t\tBonjour! voulez-vous :\n\t\t\t1-Ajouter un nouveau client\n\t\t\t2-Ajouter pleusieur client\n\t\t\t3-Fait une operation\n\t\t\t4-l'affichage des comptes \n\t\t\t5-Fidelisa les trois client\n\t\t\t6-Quiter\n\t\t\t");

}
void tri(){
	for (i = 0; i < nombredeclt; i++)
		{		//tri
		  for (j = i + 1; j < nombredeclt; j++)
		    {
if (client[i].montant > client[j].montant)
			{
tmpo = client[i];
   client[i] = client[j];
   client[j] = tmpo;
}
}
}
}
void affichageasc(int mntsup){


	for (i = 0; i < nombredeclt; i++)
		{			if(client[i].montant>=mntsup){
		//affichage assendent
printf ("\n\t\t\tle CIN    :%s   || \t\tle nom    :%s||\t\tle Montat :%.2f\n ", client[i].cin,client[i].nom,client[i].montant);
}
}
}
int  main () {

int  d = 1, r;
int x, a = 1, u = 1;

float mt;


debut:

menu ();

scanf ("%d", &r);


switch (r)  {
case 1:
      {
	do {
char cin[50];

// bach nt2kd wach cin m3awda
	      printf ("Taper CIN de nouveau client :");
	    	scanf ("%s", &cin);


for (i = 0; i < nombredeclt; i++)   {

if (strcmp (client[i].cin, cin) == 0)
		  {
printf ("CIN deja existe :");
printf ("voulez-vous ajouter une autre taper '1' pour oui ou '0' pour non \n");
scanf ("%d", &a);

if (a == 0)
break;

printf ("Taper CIN de nouveau client :");
scanf ("%s", &cin);
i = -1;
//bach la mat7sbch dek la fois dyl la demende tourné o ybdi lmra jaya mn 0 yvérifyi

continue;


}
}
if (a == 0)
break;
strcpy (client[nombredeclt].cin, cin);
printf ("Taper nom de nouveau client :");
scanf ("%s", &client[nombredeclt].nom);

printf ("Taper le montant de nouveau client :");
scanf ("%f", &client[nombredeclt].montant);

nombredeclt++;
strcpy (cin, "");
a = 0;
}
while (a != 0);
 a = 1;

break;
}break;

case 2:
      {
	do{
	char cin[50];
// bach nt2kd wach cin m3awda

printf ("Taper CIN de nouveau client :");
scanf ("%s", &cin);

for (i = 0; i < nombredeclt; i++)
	      {
if (strcmp (client[i].cin, cin) == 0){
printf ("CIN deja existe :");
printf ("voulez-vous ajouter une autre taper '1' pour oui ou '0' pour non \n");
scanf ("%d", &a);
if (a == 0)
break;
printf ("Taper CIN de nouveau client :");
scanf ("%s", &cin);
i = -1;
continue;
}
}
if (a == 0)
break;
strcpy (client[nombredeclt].cin, cin);
printf ("Taper nom de nouveau client :");
scanf ("%s", &client[nombredeclt].nom);
printf ("Taper le montant de nouveau client :");
scanf ("%f", &client[nombredeclt].montant);
nombredeclt++;
strcpy (cin, "");
printf("vous voulez ajouter une autre taper '1' pour oui ou '0' pour non \n");
scanf ("%d", &a);
}

while (a != 0);

a = 1;
break;
}

case 3:
      {
int o;
char cin[50];

printf ("\t\t\t\t1- Retrait\n-\t\t\t\t2-Depot\n");
scanf ("%d", &o);

switch (o)
	  {
case 1: {			//search
	      do{

printf("\n\t\t\t\tle CIN de Client qui  voulez-vous fait l'operation : ");

scanf ("%s", &cin);
for (i = 0; i < nombredeclt; i++)
{
if (strcmp (client[i].cin, cin) == 0)
{
printf("\n\t\t\tquel montant voulez-vous Retrait\t\t :");
scanf ("%f", &mt);
client[i].montant = client[i].montant - mt;
printf ("\n\t\t\tle nom :%s|||t\t\tle CIN :%s\t\t||Montant total: %.2f", client[i].cin, client[i].nom, client[i].montant);

u = 0;
if (u == 0)
break;
}
}
if (u != 0) {
printf ("\n\t\t\t\tinvalid cin\n");
printf ("\n\t\t\t\tvoulez-vous fait l'operation taper '0'\n");
scanf ("%d", &d);
if (d != 0)
break;	// ila mabqach baghi yder l'opration
}
}
while (u != 0 && d == 0);
u = 1;
}
break;
case 2:{			//search
   do	{
printf ("\n\t\t\t\tle CIN de Client qui  voulez-vous fait l'operation : ");
scanf ("%s", &cin);


for (i = 0; i < nombredeclt; i++)
		    {
		    if (strcmp (client[i].cin, cin) == 0)
			{
printf  ("\n\t\t\tquel montant voulez-vous Depot\t\t :");
scanf ("%f", &mt);

client[i].montant = client[i].montant + mt;
printf ("\n\t\t\tle nom :%s||\t\t\tle CIN :%s\t\t||tMontant total: %.2f", client[i].cin, client[i].nom, client[i].montant);

u = 0;

if (u == 0)
break;
}
}
if (u != 0){
printf ("\n\t\t\t\tinvalid cin\n");
printf ("\n\t\t\t\tvoulez-vous fait l'operation taper '0'\n");
scanf ("%d", &d);
if (d != 0)
break;	// ila mabqach baghi yder l'opration
}
}
while (u != 0 && d == 0);
u = 1;
}
break;
}
break;
}
break;
case 4:
 {


printf
	  ("\n\t\t\t 1-Trie  les montant Par Ordre Ascendant\n\t\t\t2-Trie  les montant Par Ordre Descendant \n\t\t\t3-Afficher les comptes bancaires ayant un montant superieur  un chiffre \n\t\t\t4-Afficher les comptes bancaires ayant un montant inferiur   un chiffre\n");
int o;


scanf ("%d", &o);



switch (o){
case 1: {
printf ("Trie  les montant Par Ordre Ascendant");

        tri();
        affichageasc(0);
}
break;
case 2: {

printf ("Trie  les montant Par Ordre Descendant");
tri();
for (i = nombredeclt-1; i >= 0; i--)
		{		//affichage Descendant
printf ("\n\t\t\tle nom :%s||\t\t\tle CIN :%s\t\t||tMontant total: %.2f", client[i].cin, client[i].nom, client[i].montant);
}
}
break;
case 3:
	    {
float mnt;

printf("Trie  les montant Par Ordre Ascendant\n Donnez le montant");
            scanf ("%f", &mnt);

        tri();
        affichageasc(mnt);
}
break;
case 4: {
float mnt;
printf
		("Trie  les montant Par Ordre Ascendant\n Donnez le montant");
scanf ("%f", &mnt);
tri();
for (i = nombredeclt+1; i >= 0; i--)
    {		//affichage descendent
		  if (client[i].montant > mnt)
		    {
printf ("\n\t\t\tle nom :%s||\t\t\tle CIN :%s\t\t||tMontant total: %.2f", client[i].cin, client[i].nom, client[i].montant);
}
}
}
}
break;
}

break;
case 5:
      {
tri();
for (i =nombredeclt-3 ; i < nombredeclt ; i++)
	  {			//FiddelisC)
client[i].montant = client[i].montant + client[i].montant * 0.013;
}
for (i =nombredeclt-3 ; i < nombredeclt ; i++)
	  {			//affichage

printf ("\n\t\t\tle nom :%s||\t\t\tle CIN :%s\t\t||tMontant total: %.2f", client[i].cin, client[i].nom, client[i].montant);

}
}
break;
case 6:
      {
	exit (0);
}
}
goto debut;

}







