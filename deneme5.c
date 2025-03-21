#include <stdio.h>
#include <conio.h>



int fact(int);
int x;

int main(){



printf("lutfen bir sayi giriniz");

scanf("%d",&x);


printf("girdiginiz sayinin faktoriyeli : %d",fact(x));



    getch();
}

int fact(int){

    int sonuc = 1;

    for (int i = 1; i <= x ; i++)
    {
        sonuc = sonuc * i;
    }
    
return sonuc;



}