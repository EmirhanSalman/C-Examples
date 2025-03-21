//10 sayı gir 50 100 arasıysa %20 arttır sayı girilcek
#include <stdio.h>
#include <conio.h>

int main(){

int q , w , e , r , t ;

printf("lutfen sirayla 5 sayi giriniz");

scanf("%d %d %d %d %d",&q,&w,&e,&r,&t);

if (q >50 && q< 100)
{
    q = (q *120)/100 ;
}


if (w >50 && w< 100)
{
    w = (w *120)/100 ;
}

if (e >50 && e< 100)
{
    e = (e*120)/100 ;
}


if (r >50 && r< 100)
{
    r = (r *120)/100 ;
}

if (t >50 && t< 100)
{
    t = (t *120)/100 ;
}
else

printf("sayilar sirasiyla %d %d %d %d %d",q,w,e,r,t);


    getch();
}