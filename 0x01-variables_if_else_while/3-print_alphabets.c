#include <stdio.h>

int main () {
   char ch;
   char caps;
   char line = '\n';

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   for(caps = 'A' ; caps <= 'Z' ; caps++) {
      putchar(caps);
   }
   putchar(line);
   return(0);
}
