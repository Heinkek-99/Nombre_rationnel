#include <stdlib.h>
#include <stdio.h>
int a,b,decision;
typedef struct arithmetique arithmetique;
struct arithmetique{
int numerateur;
int denominateur;
};
arithmetique nbr1,nbr2;
arithmetique somme,produit,dif,quotient;
//creation de la fonction de simplification
int main(){
    system("color f3");
    printf("Bienvenue dans notre espace de gestion des nombres rationnels\n Quelle operations voulez-vous effectuer?\n");
    printf("1-simplification\n 2-comparaison\n 3-addition \n 4-soustraction\n 5-division\n 6-multiplication\n");
    scanf("%d",&decision);
    if(decision==1){
        simplification(a,b);
    }else if(decision==2){
    comparaison(nbr1,nbr2);
    }else if(decision==3){
    addition(nbr1,nbr2);
    }else if(decision==4){
    soustraction(nbr1,nbr2);
    }else if(decision==5){
    division(nbr1,nbr2);
    }else if(decision==6){
    multiplication(nbr1,nbr2);
    }
return 0;
}
