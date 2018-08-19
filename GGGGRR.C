#include<graphics.h>
void main()
{
int row,col;
clrscr();
printf("\n\t\t Mastering C");
printf("\n\t\t enter X and Y coordinate: ");
scanf("%d%d",&row,&col);
gotoxy(row,col);
printf("\n\t\t Mastering C");
getch();
}