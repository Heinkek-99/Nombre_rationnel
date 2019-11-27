#include <stdlib.h>
#include <stdio.h>


typedef struct arithmetique arithmetique;
struct arithmetique{
int numerateur;
int denominateur;
};

void simplification(int a,int b){
    int temp,as,bs,choix;
do{
printf("Entrez le numerateur puis le denominateur de la fraction que vous voulez simplifier\n");
scanf("%d\n %d",&a,&b);
while(b == 0){
    printf("Le denominateur doit etre different de zero entrez en un autre\n");
    scanf("%d",&b);
}
as=a;
bs=b;

//ici je calcule le pgcd du numerateur et du denominateur

while(b>0 || b<0){
 temp = b;
  b = a % b;
  a = temp;
}
as=as/a;
bs=bs/a;
if(bs!=1){
printf("La fraction simplifiee est %d/%d\n",as,bs);
}else{
printf("La fraction simplifiee est %d\n",as);
}
 printf("Voulez-vous encore simplifier une fraction?\n Continuer =1\t Quitter = 0\n");
    scanf("%d",&choix);
}while(choix == 1);
}


void comparaison(arithmetique nbr1,arithmetique nbr2){

    printf("Ici vous pouvez comparer deux nombres rationnels\n");
    printf("Entrez successivement le numerateur puis le denominateur de la premiere fraction\n");
    scanf("%d\n %d",&nbr1.numerateur,&nbr1.denominateur);
    printf("%d/%d", nbr1.numerateur, nbr2.denominateur);
    printf("Faites de meme pour la deuxieme fraction\n");
    scanf("%d\n %d",&nbr2.numerateur,&nbr2.denominateur);
    while(nbr1.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr1.denominateur);
}
 while(nbr2.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr2.denominateur);
}
     int ppcm,Q,Q2,temp_denominateur1=nbr1.denominateur,temp_denominateur2=nbr2.denominateur;
     int a3,b3,temp2;
do{
 a3 = nbr1.denominateur;
b3 = nbr2.denominateur;
 temp2 = 0;
  while( nbr2.denominateur > 0 || nbr2.denominateur<0 ){
  temp2 = nbr2.denominateur;
  nbr2.denominateur = nbr1.denominateur % nbr2.denominateur;
  nbr1.denominateur = temp2;
          }
		  ppcm = (a3*b3)/nbr1.denominateur;
Q=ppcm/temp_denominateur1;
Q2=ppcm/temp_denominateur2;
nbr1.numerateur=nbr1.numerateur*Q;
nbr2.numerateur=nbr2.numerateur*Q2;
nbr1.denominateur=ppcm;
nbr2.denominateur=ppcm;
}while(nbr1.denominateur <0 || nbr1.denominateur >0);

                    if(nbr1.denominateur==nbr2.denominateur && nbr1.numerateur>nbr2.numerateur){

            printf("La fraction la plus grande est %d/%d",nbr1.numerateur,nbr1.denominateur);

                    }else if(nbr1.denominateur==nbr2.denominateur && nbr1.numerateur<nbr2.numerateur){

            printf("La fraction la plus grande est %d/%d",nbr2.numerateur,nbr2.denominateur);

                    }else if(nbr1.denominateur==nbr2.denominateur && nbr1.numerateur==nbr2.numerateur){

            printf("Les deux fractions sont egales");
}

}

void addition(arithmetique nbr1,arithmetique nbr2){
printf("Entrez le numerateur puis le denominateur de la premiere fraction\n");
scanf("%d\n %d",&nbr1.numerateur,&nbr1.denominateur);
printf("Faites de meme pour la deuxieme fraction\n");
scanf("%d\n %d",&nbr2.numerateur,&nbr2.denominateur);
 while(nbr1.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr1.denominateur);
}
 while(nbr2.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr2.denominateur);
}
arithmetique somme;
somme.numerateur=(nbr1.numerateur*nbr2.denominateur)+(nbr2.numerateur*nbr1.denominateur);
somme.denominateur=(nbr1.denominateur*nbr2.denominateur);
//simplification du resultat
int temp,as,bs;
as=somme.numerateur;
bs=somme.denominateur;
while(somme.denominateur>0 || somme.denominateur<0){
 temp = somme.denominateur;
  somme.denominateur = somme.numerateur % somme.denominateur;
  somme.numerateur= temp;
}
as=as/somme.numerateur;
bs=bs/somme.numerateur;
if(bs!=1){
printf("La somme est %d/%d\n",as,bs);
}else{
printf("La somme est %d\n",as);
}
}

void soustraction(arithmetique nbr1,arithmetique nbr2){
printf("Entrez le numerateur puis le denominateur de la premiere fraction\n");
scanf("%d\n %d",&nbr1.numerateur,&nbr1.denominateur);
printf("Faites de meme pour la deuxieme fraction\n");
scanf("%d\n %d",&nbr2.numerateur,&nbr2.denominateur);
 while(nbr1.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr1.denominateur);
}
 while(nbr2.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr2.denominateur);
}
arithmetique dif;
dif.numerateur=(nbr1.numerateur*nbr2.denominateur)-(nbr2.numerateur*nbr1.denominateur);
dif.denominateur=(nbr1.denominateur*nbr2.denominateur);
//simplification du resultat
int temp,as,bs;
as=dif.numerateur;
bs=dif.denominateur;
while(dif.denominateur>0 || dif.denominateur<0 ){
 temp = dif.denominateur;
  dif.denominateur = dif.numerateur % dif.denominateur;
  dif.numerateur= temp;
}
as=as/dif.numerateur;
bs=bs/dif.numerateur;
if(bs!=1){
printf("La difference est %d/%d\n",as,bs);
}else{
printf("La difference est %d\n",as);
}
}

void multiplication(arithmetique nbr1,arithmetique nbr2){
printf("Entrez le numerateur puis le denominateur de la premiere fraction\n");
scanf("%d\n %d",&nbr1.numerateur,&nbr1.denominateur);
printf("Faites de meme pour la deuxieme fraction\n");
scanf("%d\n %d",&nbr2.numerateur,&nbr2.denominateur);
 while(nbr1.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr1.denominateur);
}
 while(nbr2.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr2.denominateur);
}
arithmetique produit;
produit.numerateur=nbr1.numerateur*nbr2.numerateur;
produit.denominateur=nbr1.denominateur*nbr2.denominateur;

int temp,as,bs;
as=produit.numerateur;
bs=produit.denominateur;
while(produit.denominateur>0 || produit.denominateur<0){
 temp = produit.denominateur;
  produit.denominateur = produit.numerateur % produit.denominateur;
  produit.numerateur= temp;
}
as=as/produit.numerateur;
bs=bs/produit.numerateur;
if(bs!=1){
printf("Le produit est %d/%d\n",as,bs);
}else{
printf("Le produit est %d\n",as);
}
}

void division(arithmetique nbr1,arithmetique nbr2){
printf("Entrez le numerateur puis le denominateur de la premiere fraction\n");
scanf("%d\n %d",&nbr1.numerateur,&nbr1.denominateur);
printf("Faites de meme pour la deuxieme fraction\n");
scanf("%d\n %d",&nbr2.numerateur,&nbr2.denominateur);
 while(nbr1.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr1.denominateur);
}
 while(nbr2.denominateur == 0){
    printf("Le dénominateur doit etre different de zero entrez en un autre");
    scanf("%d",&nbr2.denominateur);
}
arithmetique quotient;
quotient.numerateur=nbr1.numerateur*nbr2.denominateur;
quotient.denominateur=nbr1.denominateur*nbr2.numerateur;

int temp,as,bs;
as=quotient.numerateur;
bs=quotient.denominateur;
while(quotient.denominateur>0 || quotient.denominateur<0){
 temp = quotient.denominateur;
  quotient.denominateur = quotient.numerateur % quotient.denominateur;
  quotient.numerateur= temp;
}
as=as/quotient.numerateur;
bs=bs/quotient.numerateur;
if(bs!=1){
printf("Le quotient est %d/%d\n",as,bs);
}else{
printf("Le quotient est %d\n",as);
}
}
