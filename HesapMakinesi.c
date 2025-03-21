#include <stdio.h>
#include <conio.h>

int main(){

float sayi1,sayi2,top=0;
int islem,cikis=0;


while (cikis == 0)
{
    

{
if (top == 0)
{

printf("islem yapacaginiz ilk degeri girin");

scanf("%f",&top);

}
printf("islem yapmak istediginiz ikinci sayiyi girin");

scanf("%f",&sayi2);

printf("Yapmak istediginiz islemin kodunu giriniz\n 1-carpma\n 2-bolme\n 3-toplama\n 4-cikatma ");

scanf("%d",&islem);

if (islem == 1)
{
    top = (top*sayi2);
    
    
    printf("islemin sonucu = %f\n",top);

    
}

else if (islem == 2)
{
  
    top = top/sayi2;

    printf("islemin sonucu = %f\n",top);
    

}

else if (islem == 3)
{

    top = top+sayi2;

    printf("islemin sonucu = %f\n",top);

    
}

else if (islem == 4)
{
    
    top = top-sayi2;
    
    printf("islemin sonucu = %f\n",top);

    
}

}


printf("eger devam etmek istiyorsaniz 0 a basin  ");

scanf("%d",&cikis);

}

    getch();
}