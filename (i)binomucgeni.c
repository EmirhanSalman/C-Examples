#include <stdio.h>
#include <conio.h>

int main(){

for (int i = 0; i <=10; i++){


    for (int j = 0; j <= i; j++)
    {
    
        int nf = 1;
        for (int p = 1; p <= i; p++)
        {
            nf = nf * p;

        }
        
        int kf = 1;
        for (int p = 1; p <=j ; p++)
        {
            kf = kf * p;
        }
        

        int knf = 1;

        for (int p = 1; p <= i-j; p++)
        {
            knf= knf * p;
        }
        

        printf("%d ",nf/(knf*kf));

    }
    
    printf("\n");

}




    getch();
}