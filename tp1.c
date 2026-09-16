#include<stdio.h>
int main ()
{
    float mt_dt , mt_euro , mt_dollar , taux_euro ,taux_dollar;
    printf ("donner le montant en dt:");
    scanf ("%f" ,&mt_dt);

    printf("donner le montant en euro:");
    scanf ("%f" ,&taux_euro);

    printf("donner le montant en dollar: ");
    scanf ("%f" ,&taux_dollar);
    mt_dollar = mt_dt/taux_dollar;
    mt_euro = mt_dt/taux_euro;

    printf("montant en euro : %.2f",mt_euro);
    printf("montant en dollar : %.2f",mt_dollar);






}
