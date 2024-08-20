#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main (void){
  char *s = get_string("S: "):
  char *t = malloc(strlen(s) + 1 );

  for(int i = 0; i < strlen(s) + 1; i++)
    {
      t[i] = s[i];
    }
  t[0] = toupper(t[0]);
  printf("S: %s\n,s);
  printf("T: %s\n,t);
  return 0;
  }
//hello guys this code was written just a few moments