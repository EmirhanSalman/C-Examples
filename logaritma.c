#include <stdio.h>
#include <conio.h>

int main(){
int x;
int flag =0;
int y;
    printf("lutfen bir sayi giriniz\n");

    scanf("%d",&x);

    for (int i = 2; i < x; i *= 2)
    {
       
        flag ++;
        y = i;
    }
    
        printf("istenen deger = %d\n",y);
        printf("2 nin %d . dereceden logaritmasi",flag);




    getch();
}