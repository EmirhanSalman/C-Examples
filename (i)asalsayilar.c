#include <stdio.h>
#include <conio.h>
int asal();
int main(){
    // GİRİLEN SAYIDAN KÜÇÜK EN BÜYÜK ASAL SAYIY BULAN KODU YAZIN
int x;
printf("lutfen bir sayi giriniz");

scanf("%d",&x);

printf("istenen deger = %d",asal(x));

    getch();
}

int asal(int x){

for (int i = x-1; i >= 2; i--)
{
    int flag = 0;

    for (int j = 1; j <= i; j++)
    {
        
        if (i % j == 0)
        {
            flag ++;
           
        }
    
    }
    if (flag <= 2)
    {
        return i;
        break;
    }
    
    



}





}