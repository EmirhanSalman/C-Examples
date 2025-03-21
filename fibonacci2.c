#include <conio.h>
#include <stdio.h>
int fib();
int main(){
int x;
 
printf("istenen sirayi giriniz");

scanf("%d",&x);

printf("istenen deger = %d",fib(x));

getch();

}

int fib(int x){

if (x == 1 || x == 0)
{
    return 1;
}



return fib(x-1)+fib(x-2);



}