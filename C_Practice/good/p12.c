#include <stdlib.h>
  #include <stdio.h>
  void Error(char* s)
  {
      printf("%s",s);
      return;
  }

  int main()
  {
      int *p;
      p = malloc(sizeof(int));
      if(p == NULL)
      {
          Error("Could not allocate the memory\n");
          Error("Quitting....\n");
          exit(1);
      }
      else
      {
          /*some stuff to use p*/
      }
      return 0;
  }
