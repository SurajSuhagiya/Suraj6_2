//WRITE A PROGRAM TO PRINT EVEN NUMBERS FROM 1 TO N USING A DO-WHILE LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int s;
clrscr();
printf("<====================>\n");
printf("   ENTER THE VALUE :   ");
scanf("%d\n",&s);

do{
    if(s%2==0)
    printf("%d\n",s);
    s--;
    }while(s<=1);
getch();
}