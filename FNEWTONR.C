#include<math.h>
float f(float  x)
{
float z;
z=3*x-cos(x)-1;
return z;
}
float f1(float x)
{
float z;
z=3+sin(x);
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
x=a;
while(fabs(h)>e)
{
h=-f(x)/f1(x);
x=x+h;
}
printf("%f",x);
getch();
}