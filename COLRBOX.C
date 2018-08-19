#include<stdlib.h>
#include<graphics.h>
void main()
{
int x,y;
int x1,y1,i,j;
clrscr();
randomize();
while(!kbhit())
{
x=random(80);
y=random(24);
x1=random(13);
y1=random(9);
if(y1+y>23)
y1=23-y;
textbackground(random(16));
for(i=1;i<=x1;i++)
for(j=1;j<=y1;j++)
{
gotoxy(x+i,y+j);
cprintf(" ");
}
}
getch();
}