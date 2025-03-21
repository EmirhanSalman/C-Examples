#include <conio.h>
#include <stdio.h>

int main(){
int adet;
printf("lutfen bir sayi giriniz");

scanf("%d",&adet);

for (int i = 2; i < 100; i++)
{
int flag = 0;
    
    for (int j = 2; j<=i ; j++)
    {
       
        if (i / j ==0)
        {

        flag ++;

        }
        
        if (flag <= 1 )
            {
                printf("%d\n",i);
                break;
            }
            
    }
    
            



}









    getch();
}