#include <conio.h>
#include <stdio.h>

int main(){
	
int a[] = {1,2,3,4,5,6,7,8,9,10};

for (int i = 0; i <= 9; i++)
{
    
printf("%d\t",a[i]);

}
printf("\n");

int gecici;

for (int i = 0; i <= 4; i++)
{

gecici = a[i];

a[i]= a[9-i];

a[9-i] = gecici;

}

for (int i = 0; i <=9; i++)
{

printf("%d\t",a[i]);

}
getch();
}

