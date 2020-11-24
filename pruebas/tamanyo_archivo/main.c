#include <stdio.h>


int main ()

{

  FILE *fich;

  fich=fopen("main.c","r");

  fseek(fich, 0L, SEEK_END);
  printf("test.c ocupa %d bytes", ftell(fich));
  fclose(fich);

}
