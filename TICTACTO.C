#include<stdio.h>
#include<conio.h>



#define UPARROW     72
#define DOWNARROW   80
#define LEFTARROW   75
#define RIGHTARROW  77
#define ENTER       13
#define QUIT       'q'


int _x,_y;


void showframe(int posx, int posy)
{

  int hr=196, vr=179;
  int crossbr=197;
  int x=posx, y=posy;
  int i,j;
  textcolor(6);
  gotoxy(35,4); cprintf("TIC TAC TOE");
  gotoxy(35,5); for(i=0;i<11;i++) cprintf("%c",223);


  for(i=0;i<2;i++)
  {
    for(j=1;j<=11;j++)
     {
      gotoxy(x,y);
      printf("%c",hr);
      x++;
     }
    x=posx; y+=2;
  }
  x=posx+3; y=posy-1;

  for(i=0;i<2;i++)
  {

   for(j=1;j<=5;j++)
   {
      gotoxy(x,y);
      printf("%c",vr);
      y++;
   }
   x+=4;y=posy-1;
  }


  x=posx+3; y=posy;
  gotoxy(x,y);
  printf("%c",crossbr);

   x=posx+7; y=posy;
  gotoxy(x,y);
  printf("%c",crossbr);

  x=posx+3; y=posy+2;
  gotoxy(x,y);
  printf("%c",crossbr);

  x=posx+7; y=posy+2;
  gotoxy(x,y);
  printf("%c",crossbr);

}


void fillrandom(char arr[3][3])
{
  int i=0,j=0;
  char ch='A';

  for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
     { arr[i][j] = ch; ch++; }

   }
}


void showbox(char ch, int box)
{

   switch(box)
   {
     case 1 :	gotoxy(_x+1,_y-1); printf("%c",ch); break;
     case 2 :	gotoxy(_x+5,_y-1); printf("%c",ch); break;
     case 3 :	gotoxy(_x+9,_y-1); printf("%c",ch); break;
     case 4 :	gotoxy(_x+1,_y+1); printf("%c",ch); break;
     case 5 :	gotoxy(_x+5,_y+1); printf("%c",ch); break;
     case 6 :	gotoxy(_x+9,_y+1); printf("%c",ch); break;
     case 7 :	gotoxy(_x+1,_y+3); printf("%c",ch); break;
     case 8 :	gotoxy(_x+5,_y+3); printf("%c",ch); break;
     case 9 :	gotoxy(_x+9,_y+3); printf("%c",ch); break;
   }

}


void putintobox(char arr[3][3], char ch, int box)
{
  switch(box)
  {

    case 1 :	if(arr[0][0] != 'X' && arr[0][0]!= 'O')
		{ arr[0][0] = ch;
			  showbox(ch,1);
			}
			break;

    case 2 :	if(arr[0][1] != 'X' && arr[0][1]!= 'O')
			{ arr[0][1] = ch;
			  showbox(ch,2);
			}
			break;

    case 3 :	if(arr[0][2] != 'X' && arr[0][2]!= 'O')
		{ arr[0][2] = ch;
			  showbox(ch,3);
			}
			break;

    case 4 :	if(arr[1][0] != 'X' && arr[1][0]!= 'O')
		       { arr[1][0] = ch;
			 showbox(ch,4);
		       }
			break;

    case 5 :	if(arr[1][1] != 'X' && arr[1][1]!= 'O')
			{ arr[1][1] = ch;
			 showbox(ch,5);
			}
			break;

    case 6 :	if(arr[1][2] != 'X' && arr[1][2]!= 'O')
			{ arr[1][2] = ch;
		  showbox(ch,6);
			}
			break;

    case 7 :	if(arr[2][0] != 'X' && arr[2][0]!= 'O')
		    { arr[2][0] = ch;
			  showbox(ch,7);
			}
			break;

    case 8 :	if(arr[2][1] != 'X' && arr[2][1]!= 'O')
			{ arr[2][1] = ch;
			  showbox(ch,8);
			}
			break;

    case 9 :	if(arr[2][2] != 'X' && arr[2][2]!= 'O')
			{ arr[2][2] = ch;
			  showbox(ch,9);
			}
			break;
   }
}


void gotobox(int box)
{
  switch(box)
  {
    case 1 : gotoxy(_x+1,_y-1); break;
    case 2 : gotoxy(_x+5,_y-1); break;
    case 3 : gotoxy(_x+9,_y-1); break;
    case 4 : gotoxy(_x+1,_y+1); break;
    case 5 : gotoxy(_x+5,_y+1); break;
    case 6 : gotoxy(_x+9,_y+1); break;
    case 7 : gotoxy(_x+1,_y+3); break;
    case 8 : gotoxy(_x+5,_y+3); break;
    case 9 : gotoxy(_x+9,_y+3); break;

  }
}



int navigate(char arr[3][3], int box, int player, int key)
{
   switch(key)
   {
     case UPARROW    : if( (box!=1) || (box!=2) || (box!=3) )
			       { box-=3; if(box<1) box = 1; gotobox(box); }
			   break;

     case DOWNARROW  : if( (box!=7) || (box!=8) || (box!=9) )
			       { box+=3; if(box>9) box = 9; gotobox(box); }
			       break;

     case LEFTARROW  : if( (box!=1) || (box!=4) || (box!=7) )
			       { box--;  if(box<1) box = 1; gotobox(box); }
			       break;

     case RIGHTARROW : if( (box!=3) || (box!=6) || (box!=9) )
			       { box++; if(box>9) box = 9; gotobox(box); }
			       break;

     case ENTER      : if(player == 0)
				    putintobox(arr,'O',box);
			       else if(player == 1)
				    putintobox(arr,'X',box);
			       break;
    }

 return box;
}

int checkforwin(char arr[3][3])
{
  int w=0;


  if((arr[0][0] == arr[0][1]) && (arr[0][1] == arr[0][2])) w = 1;
  else if((arr[1][0] == arr[1][1]) && (arr[1][1] == arr[1][2])) w = 1;
  else if((arr[2][0] == arr[2][1]) && (arr[2][1] == arr[2][2])) w = 1;
  else if((arr[0][0] == arr[1][0]) && (arr[1][0] == arr[2][0])) w = 1;
  else if((arr[0][1] == arr[1][1]) && (arr[1][1] == arr[2][1])) w = 1;
  else if((arr[0][2] == arr[1][2]) && (arr[1][2] == arr[2][2])) w = 1;
  else if((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2])) w = 1;
  else if((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0])) w = 1;

  return w;
}


int boxesleft(char a[3][3])
{
   int i,j,boxesleft=9;

   for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
      { if((a[i][j] == 'X') ||(a[i][j] == 'O'))
	  boxesleft--;
      }
    }

   return boxesleft;
}


int main()
{
  char arr[3][3];
  char player[3][30],O_OR_X[2],ch;
  int  x,y,turns,chance,enter,box,win,quit,winner;
  int  movesfinished = 0;

  O_OR_X[0] = 'O'; O_OR_X[1] = 'X';
  do{

   textbackground(0); textcolor(1);
   clrscr();

  _x = 35; _y = 12;
   x = _x; y = _y;

  showframe(x,y);
  showbox('O',1);
  showbox('X',2);
  showbox('O',3);
  showbox('X',4);
  showbox('O',5);
  showbox('X',6);
  showbox('O',7);
  showbox('X',8);
  showbox('O',9);

  gotoxy(2,18);
  printf("Welcome to Tic Tac Toe");
  printf("\n Rules are simple. Navigate to the box with arrow keys [%c %c %c %c] and hit enter.",30,31,17,16);
  printf("\n If you try to overwrite a box, then your chance will be passed on.");
  fillrandom(arr);

  printf("\n Player 1, enter your name: "); gets(player[0]);
  printf(" Player 2, enter your name: ");   gets(player[1]);

  printf("\n %s, you have been given O             %s, you have been given X",player[0],player[1]);
  printf("\n Lets begin ( press any key )"); getch();


  turns  = 0;
  chance = 0;
  enter  = 0;
  box    = 1;
  win    = 0;
  quit   = 0;
  winner = 10;




  clrscr();
  showframe(x,y);

  while((!win))
  {


     gotoxy(2,20);
     printf("%s(%c), its your chance.     ",player[chance],O_OR_X[chance]);

     while(!enter && !quit)
     {
	  if(kbhit())
	  {
	    ch = getch();

	    switch(ch)
	    {
	      case UPARROW    :  box=navigate(arr,box,chance,UPARROW);
					 break;
	      case DOWNARROW  :  box=navigate(arr,box,chance,DOWNARROW);
					     break;
	      case LEFTARROW  :  box=navigate(arr,box,chance,LEFTARROW);
					     break;
	      case RIGHTARROW :  box=navigate(arr,box,chance,RIGHTARROW);
					     break;
	      case ENTER      :  box=navigate(arr,box,chance,ENTER);
					     enter=1; break;
	      case QUIT       :  quit = 1; break;
	    }
	 }

     }

     if(quit) break;

     if(chance == 0)
      { putintobox(arr,box,'O'); box = 1; }
     else if(chance == 1)
      { putintobox(arr,box,'X'); box = 1; }

     if( (win = checkforwin(arr)) == 1)
      winner = chance;

     if(chance == 1) chance = 0;
     else chance = 1;

     enter = 0;
     turns++;

     if(!boxesleft(arr))
      movesfinished = 1;


     if((!win) && (turns==9) && (movesfinished))
      break;

  }

  if(win)
  { gotoxy(22,22);
    textbackground(4); textcolor(15);

    if(winner == 0)
     cprintf(" Congratulations %s, you win the game! ",player[0]);

    else
     cprintf(" Congratulations %s, you win the game! ",player[1]);
     sound(500);
     delay(350);
     nosound();

  }

  else if(quit)
   {
      gotoxy(10,22);
      textbackground(4); textcolor(15);
      cprintf(" Ok, lets play again sometime. See you later. Press any key to exit.\n\n");
      getch();
      return 1;
   }
  else if((!win) && (turns==9) && (movesfinished))
  { gotoxy(22,22);
    printf("No one wins. Its a draw.");
    sound(500);
     delay(350);
     nosound();

  }

   printf("\n\n Do you want to play again? (Y/N): "); ch = getch();


  }while(ch=='Y' || ch=='y');

  return 0;

}

