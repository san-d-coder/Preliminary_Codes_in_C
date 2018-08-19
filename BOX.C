#include<graphics.h>
void main()
{
int i,j;
int x,y,sizex,length,breadh,sizey;
clrscr();
printf("\n\t\t enter the length and breadth of box: ");
scanf("%d%d",&sizex,&sizey);
printf("\n\t\t position of the box x y: ");
scanf("%d%d",&x,&y);
for(i=1;i<=sizex;i++)//loop for horizontal sides..
{
gotoxy(x+i,y);
printf("%c",196);
gotoxy(x+i,y+1+sizey);
printf("%c",196);
}
for(i=1;i<=sizey;i++)//loop for vertical sides..
{
gotoxy(x,y+i);
printf("%c",179);
gotoxy(x+sizex+1,y+1);
printf("%c",179);
}
gotoxy(x,y); //corners..
printf("%c",218);
gotoxy(x+1+sizex,y);
printf("%c",191);
gotoxy(x,y+1+sizey);
printf("%c",192);
gotoxy(x+1+sizex,y+1+sizey);
printf("%c",217);
getch();
}

