#include<stdio.h>
int main()
{
    int x,y,z,aux;
    printf("x=");
    scanf("%d",&x);

    printf("y=");
    scanf("%d",&y);

    printf("z=");
    scanf("%d",&z);
    printf("avant la rotation%d %d %d",x,y,z);


    aux=x;
    x=y;
    y=z;
    z=aux;
    printf("apres la rotation%d %d %d",x,y,z);



}
