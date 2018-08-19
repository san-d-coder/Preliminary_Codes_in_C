float f(float x)
{
float s;
s=1/(1+x*x);
return s;
}
void main()
{
float x[15],y[15];
float h,a,b,n,s1=0,s2=0,i,sum=0;
clrscr();
printf("\n\t\t enter the value of a: ");
scanf("%f",&a);
printf("\n\t\t enter the value of b: ");
scanf("%f",&b);
printf("\n\t\t enter the value of n: ");
scanf("%f",&n);
x[0]=a;
x[n]=b;
h=(b-a)/n;
for(i=0;i<=n;i++)
{
x[i]=x[0]+i*h;
y[i]=f(x[i]);
}
s1=y[0]+y[n];
for(i=1;i<n;i++)
{
s2=s2+y[i];
}
sum=(h/2)*(s1+2*s2);
printf("\n\t\tthe result is: %f",sum);
getch();
}