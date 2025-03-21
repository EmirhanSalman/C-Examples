#include <stdio.h>
#include <conio.h>

int main(){


for (int i = 1; i <=6; i++)
{
    for (int j = 1; j <= 6; j++)
    {
        
        if (j*i % 3 == 0)
        {
            printf("x");
        }
        
        else{

            printf(" ");

        }


    }
    

printf("\n");



}






    getch();
}