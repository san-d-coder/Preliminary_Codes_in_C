float f(float x)
{
float s;
s=1/(1+x*x);
return s;
}
void main()
{
int n,i;
float x[20],y[20];
float a,b,h,p,t,q,s=0;
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
//s=s+y[i];
}
for(i=1;i<n;i++)
{
s=s+y[i];
}
p=y[0]+y[n];
q=p+2*s;
t=(h/2)*q;
printf("\n\n\t\t the result is %f",t);
getch();
}