

#include "DisplayBorder.h"
#include "DisplayBorder.c"

int main()
{
 int playerx=25,playery=13, gemx=35, gemy=7;
 int x=35, y=10, ch1, ch2, b;

 setxy(24,1);
 printf("     ...Find the GEM...") ;
 DisplayBorder();

 setxy(playerx, playery);
 printf("O>");

 setxy(gemx, gemy);
 printf("%c",4);

 ch1 = getch();     /*getch() method pauses the Output Console until a key is pressed. */
 ch2 = 0;

/*When accepting arrow key, function must be called twice; first call returns 0/0xE0; second call returns actual key code.*/

 if (ch1 == 0xE0)
 {
   while(ch2=getch())
   {
  if(ch2 == 'X') exit(0);
  if(ch2 == 75) /* Left */
  {
    if(playerx>11)       /* Restrict bat on left side wall */
    {
   setxy(--playerx,playery);
   printf("O>");
   setxy(playerx+3,playery);        /* Space to clear bat route */
   printf(" ");
    }
  }
    if(ch2 == 77) /* Right */
    {
   if(playerx<37)            /* Restrict bat on right side wall */
   {
      setxy(++playerx,playery);
     printf("O>");
     setxy(playerx-1,playery);        /* Space to clear bat route */
     printf(" ");
   }
    }
    if(ch2 == 72) /* Up */
    {
   if(playery>6)
   {
     setxy(playerx,--playery);
     printf("O>");
     setxy(playerx,playery+1);
     printf("   ");
   }
    }
    if(ch2 == 80) /* Down */
    {
   if(playery<14)
   {
     setxy(playerx,++playery);
     printf("O>");
     setxy(playerx,playery-1);
     printf("   ");
   }
    }
    if(playerx==gemx-1 && playery==gemy)
    {
   setxy(gemx-9,gemy+4);
   printf("Mission Accomplished");
   setxy(gemx-9,gemy+5);
   printf("  ...GEM Found...");
   setxy(gemx-9,gemy+6);
   printf("  ...Game Over...");
   getch();
   exit(0);
    }
  }
 }
 getch();
 return 0;
}
