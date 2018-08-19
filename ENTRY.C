void main()
{
char masterlist[6][10]={
			"sudipta",
			"koushik",
			"nasir",
			};
int i,flag,a;
char yourname[10];
clrscr();
printf("\n\t\tSir, please enter your name: ");
scanf("%s",yourname);
flag=0;
for(i=0;i<=5;i++)
{
a=strcmp(&masterlist[i][0],yourname);
if(a==0)
{
printf("\n\t\t::please enter your room::");
flag=1;
break;
}
}
if(flag==0)
{
printf("\n\t\t sorry..you are trespassers ");
for(i=0;i<5;i++)
{
sound(450);
delay(500);
nosound();
}
}
getch();
}