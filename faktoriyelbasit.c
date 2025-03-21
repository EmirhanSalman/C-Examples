#include <stdio.h>
#include <conio.h>

int main(){

int i , x , f = 1 ; 
printf("Lutfen bir sayi giriniz ");

scanf("%d",&x);

for (int i = 1 ; i <= x; i++)
{
    f= f * i;
}

printf("fakröriyel = %d",f);

    getch();
}