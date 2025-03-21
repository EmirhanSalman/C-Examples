#include <conio.h>
#include <stdio.h>

int fact();
int x;
int main(){

printf("lutfen faktorielini istediginiz sayiyi girin");

scanf("%d",&x);

printf("girdiginiz sayinin faktorieli = %d",fact(x));


getch();
}

int fact(int x){

if (x == 1)
{
    return 1;
}


return x * fact(x-1);




}