#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
  fprintf(stdout,"%s",argv[0]);
  #warning Give me a warning, please
  return 0;
}
