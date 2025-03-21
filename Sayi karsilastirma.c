#include <stdio.h>
#include <conio.h>

int main(){

int x,y,z ;

printf("Lutfen 1. sayiyi giriniz\n");

scanf("%d",&x);

printf("Lutfen 2. sayiyi giriniz\n");

scanf("%d",&y);


if ( x > y )
{
    printf ("%d buyuktur %d den",x,y);
}

else if (y > x )
{
    printf("%d buyuktur %d den",y,x);
}

else {

    printf("2 sayi esittir");
}





    getch();
}