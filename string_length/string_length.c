/* Simple sweet shortest program to calculate length of string without strlen function */
#include <stdio.h>
#define MAX_LEN 200
int main()
{
   char str[MAX_LEN];
   fgets(str, MAX_LEN, stdin);// I have used fgets to accept string with spaces
   printf("Length of string %d", printf("%s",str));
   return 0;
}
