#include <string.h>
#include <ctype.h>
void main()
{
   int length, i;
   char *string = "this is a string.";
   //clrscr();
   length = strlen(string);
   for (i = 0; i < length; i++)
   {
      if ((string[i] >= 'a') && (string[i] <= 'z'))
	 {
	 string[i] = _toupper(string[i]);
	 }
   }
   printf("%s\n",string);
   getche();
}