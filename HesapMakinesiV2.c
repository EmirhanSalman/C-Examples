#include <stdio.h>
#include <conio.h>

int main(){

float sayi1,sayi2 =987 ,top=0;
char cikis = 'E';
char islem;
char toplam = 'H';


while (cikis == 'E')
{       
    
if (top != 0)
{
    
printf("Sonucu sifirlamak ister misiniz ? E/H");

scanf("%s",&toplam);

if (toplam == 'E')
{
    top=0;
}

}

if (top == 0)
{

printf("islem yapacaginiz ilk degeri girin ");

scanf("%f",&top);

}


printf("Yapmak istediginiz islemi girin ");

scanf("%s",&islem);

printf("islem yapmak istediginiz ikinci sayiyi girin ");

scanf("%f",&sayi2);




if (islem =='*')
{
    top = (top*sayi2);
    
    
    printf("islemin sonucu = %f\n",top);

    
}

else if (islem == '/')
{
  
    top = top/sayi2;

    printf("islemin sonucu = %f\n",top);
    

}

else if (islem == '+')
{

    top = top+sayi2;

    printf("islemin sonucu = %f\n",top);

    
}

else if (islem == '-')
{
    
    top = top-sayi2;
    
    printf("islemin sonucu = %f\n",top);

    
}




printf("eger devam etmek istiyor musunuz E/H  ");

scanf("%s",&cikis);

}

    getch();
}