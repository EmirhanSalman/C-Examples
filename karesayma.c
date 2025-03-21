#include <conio.h>
#include <stdio.h>


int karesayisi();
int main(){
int x;

printf("kaca kaclık oldugunu giriniz");

scanf("%d",&x);

printf("olusan kare sayisi = %d",karesayisi(x));

    getch();
}

int karesayisi(int x){

if (x == 1)
{
    return 1;
}

return (x*x) + karesayisi(x-1);



}