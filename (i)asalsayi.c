#include <conio.h>
#include <stdio.h>

int main(){
int adet = 0;
int top = 0;
for (int i = 1; i <=100; i++)
{
    int flag=0;
   for (int j = 2; j <= i-1; j++)
   {      
       
       if (i % j == 0 )
       {

           flag =1;
           
       }
       
   }
   
        if (flag == 0 && i != 1)
       {
           printf("%d\n",i);
        adet++;
        top += i;
       }

}

    printf("adet = %d\n",adet);
    printf(" toplam =%d\n",top);






    getch();
}