#ifndef NOMBRE_RATIONNEL_H_INCLUDED
#define NOMBRE_RATIONNEL_H_INCLUDED

void simplification(int a,int b);
void comparaison(arithmetique nbr1,arithmetique nbr2);
void multiplication(arithmetique nbr1,arithmetique nbr2);
void division(arithmetique nbr1,arithmetique nbr2);
void addition(arithmetique nbr1,arithmetique nbr2);
void soustraction(arithmetique nbr1,arithmetique nbr2);
struct arithmetique{
int numerateur;
int denominateur;
};

#endif // NOMBRE_RATIONNEL_H_INCLUDED
