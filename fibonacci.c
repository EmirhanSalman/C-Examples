#include <conio.h>
#include <stdio.h>
int fib();
int main(){
int x;
printf("lutfen fibonacciden istediginiz sirayi yazin");

scanf("%d",&x);

printf("fibonacci degeri = %d",fib(x));





    getch();
}

int fib(int x){

int a,b =1;
int c;
for (int i = 2; i <=x ; i++)
{
    

    c = a+ b;

    a=b;
    b=c;
}

return c;






}
