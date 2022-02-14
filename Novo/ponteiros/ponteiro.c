#include<stdio.h>
#include<conio.h>


int main(){
 int x = 10;
 int *ponte;
 ponte = &x;

 int y = 20;
 *ponte = y;


 printf("\n %i %i", x, y);
 printf("\n %i %i", &x, &y);
}
