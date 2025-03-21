#include <stdio.h>
#include <conio.h>

int main(){
printf("lutfen bir sayi giriniz");

int x,y;
int flag =0;
scanf("%d",&x);
y = x;



for ( x ; x >= 2 ; x--)
{
    
if (y%x==0)
{
    flag++;
}


}

if (flag== 1)
{
    printf("sayi asal");
}

else{

printf("sayi asal değildir");

}


getch();
}