#include <stdio.h>
#include <conio.h>
int main()
{int i,j,giris;
int bosluk,yildiz;
printf("giris: ");
scanf("%d",&giris);
bosluk=giris-1;
yildiz=1;
for(i=0;i<giris;i++)
{
for(j=0;j<bosluk;j++)
printf(" ");
for(j=0;j<yildiz;j++)
printf("*");
printf("\n");
bosluk--;
yildiz=yildiz+2;
}

getch();
}