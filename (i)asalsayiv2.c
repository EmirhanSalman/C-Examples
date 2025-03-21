#include <stdio.h>
#include <conio.h>
int main(){

// VERİLEN SAYIDAN BÜYÜK EN KÜÇÜK ASAL SAYIYI BULAN PROGRAMI YAZIN

int flag = 0;
int x;
printf("lutfen bir sayi giriniz");

scanf("%d",&x);

for (int i = 1; i <= x; i++)
{
    int flag2 =0;
    
    for (int j = 1; j <= i; j++)
    {
        
    if (i % j == 0)
    {
        flag2 ++;
    }
    
    }
    
    if (flag2 <= 2 && i !=1)
    {
        flag ++;

    }

    

    
}

printf("girilen sayiya kadarki asal sayi adedi = %d\n",flag);
int bflag2 =0;

for (int i = 1; i <= 100 || bflag2 < flag; i++)
{
    int z = 0;
    int bflag = 0;
    for (int j = 1; j <= i; j++)
    {
        
        if (i % j == 0 )
        {
            bflag ++;
            
        }

        
    }
    if (bflag <=2 && i != 1 )
        {
           bflag2 ++; 
           z = i;
        }

    if (bflag2 > flag)
    {
       printf("istenen sayi = %d\n",z) ;   
          
        printf("kacinci asal sayi oldugu = %d\n",bflag2) ;   

       break;
    }
    

}


    getch();
}