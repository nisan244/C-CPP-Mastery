#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    scanf("%c", &c);

   if (c >= 'a' && c < 'z'){
    char n = c + 1;
    printf("%c", n);
   }
   if(c == 'z'){
    char b = c - 25;
    printf("%c", b);
   }
    
    return 0;
}