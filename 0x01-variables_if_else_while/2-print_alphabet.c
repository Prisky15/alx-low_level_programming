#include <stdio.h>

int main () {
   char ch;
   char line = '\n';

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   putchar(line);
   return(0);
}
