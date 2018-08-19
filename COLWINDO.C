#include<stdlib.h>
void main()
{
int x,y;
randomize();
while(!kbhit())
{
x=random(80);
y=random(25);
window(x,y,x+random(13),y+random(9));
textbackground(random(16));
clrscr();
}
getch();
}