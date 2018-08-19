#include<math.h>
float f(float x)
{
float s;
s=(exp(-pow(x,3)));
return s;
}
void main()
{
int n,i;
float x[20],y[20];
float a,b,h,p,t,q,s=0,s2=0;
clrscr();
printf("\n\t\t enter the value of a: ");
scanf("%f",&a);
printf("\n\t\t enter the value of b: ");
scanf("%f",&b);
printf("\n\t\t enter the value of n: ");
scanf("%d",&n);
h=(b-a)/n;
x[0]=a;
x[n]=b;
for(i=0;i<=n;i++)
{
x[i]=x[0]+(i*h);
y[i]=f(x[i]);
}
for(i=1;i<n;i=i+2)
{
s=s+y[i];
}
for(i=2;i<n-1;i=i+2)
{
s2=s2+y[i];
}
p=y[0]+y[n];

q=p+4*s+2*s2;

t=(h/3)*q;

printf("\n\n\t\t the result is %f",t);
getch();
}