#include<math.h>
float f(float x)
{
float z;
z=log(2*(x+1))-x;
return z;
}
void main()
{
float a,b,h=0.1,x,e=0.00001;
clrscr();
printf("\n\t\t enter the value of a and b: ");
scanf("%f%f",&a,&b);
while(f(a)*f(b)>0)
{
a++;
b++;
}
while(fabs(h)>e)
{
h=((b-a)/(f(b)-f(a))*f(a));
x=a-h;
if(f(a)*f(x)<0)
{
b=x;
}
else
{
a=x;
}
}
printf("\n\t\t root is: %7.5f",x);
getch();
}