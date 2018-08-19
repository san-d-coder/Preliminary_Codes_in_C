#include<math.h>
float f(float x)
{
float z;
z=log(2*(x+1))-x;
return z;
}
void regularfalsi(float a,float b)
{
float x,h=0.1,e=0.00001;
while(f(a)*f(b)>0)
{
a++;
b++;
}
while(fabs(h)>e)
{
h=f(a)*(b-a)/(f(b)-f(a));
x=a-h;
if(f(a)*f(x)<0)
b=x;
else
a=x;
}
printf("\n\t\t the result is: %f",x);
}
void main()
{
float a,b;
printf("\n\t\t enter the value of a: ");
scanf("%f",&a);
printf("\n\t\t enter the value of b: ");
scanf("%f",&b);
regularfalsi(a,b);
getch();
}