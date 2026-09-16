#include<stdio.h>
int main()
{
    float note_1 , note_2 , note_3 ,moy ;

    printf ("note 1:");
    scanf ("%f",&note_1);

    printf ("note 2:");
    scanf ("%f",&note_2);

    printf ("note 3:");
    scanf ("%f",&note_3);
    const int coff1=2, coff2=3,coff3=5;

    moy=((note_1*coff1)+(note_2*coff2)+(note_3*coff3))/(coff1 +coff2 +coff3);

    printf("moyenne :%.2f",moy);

}



