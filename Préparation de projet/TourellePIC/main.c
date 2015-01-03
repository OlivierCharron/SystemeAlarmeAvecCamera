#include <main.h>


void main()
{
char value;
   while(!kbhit())
   {
     value = getc();
     printf(value);
   }

}
