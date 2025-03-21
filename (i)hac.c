#include <stdio.h>
#include <conio.h>

int main(){
int sayi;

printf("lutfen bir sayi giriniz");
scanf("%d",&sayi);
{

for (int i = 1; i <= sayi; i++)
{
    
    for (int j = 1; j <= sayi; j++)
    {
        
        if (sayi % 2 != 0)
        {
            
            int x = (sayi + 1)/2;

            if (j == x || i == x)
            {
                printf("*");
            }
            
            else
            printf(" ");

        }
        else{

            int y = (sayi +1)/2;
            if (j == y || j == y+1 || i ==y || i== y+1)
            {
                printf("*");
            }
            else
            printf(" ");

        }        






    }
    
    printf("\n");
}
}


    getch();
}