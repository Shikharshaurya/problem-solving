// Program for reversing the given string (User defined function)
#include <stdio.h>
int main()
{
   char a[1000], r[1000];
   int b, e, c=0;
   printf("Input a string\n");
   gets(a);
   while (a[c] != '\0')
      c++;
   e = c - 1;
   for (b = 0; b < c; b++) {
      r[b] = a[e];
      e--;
   }
   r[b] = '\0';
   printf("%s\n", r);
   return 0;
}