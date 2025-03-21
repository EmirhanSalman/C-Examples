#include <stdio.h>
#include <conio.h>
int comb();
int fact();
int x,y,k;

int main(){

printf("lutfen kombinasyonunu bulmak istedigibniz 2 sayiyi girin\n");

scanf("%d",&x);
scanf("%d",&y);

printf("girilen sayilarin kombinasyonu = %d",comb(x,y));



    getch();
}
int comb(int x , int y){




 return fact(x)/(fact(y)*fact(x-y)) ;



}



 int fact(int k){

     int sonuc = 1;


    for (int i = 1; i <= k; i++)
    {
        
        sonuc *= i;

    }
    

    return sonuc;




 }