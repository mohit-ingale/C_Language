#include <stdio.h>
  #include <unistd.h>
  int main()
  {
         // while(1)
          {
                  fprintf(stdout,"hello-out\n");
                  fprintf(stderr,"hello-err\n");
                  sleep(1);
          }
         
          return 0;
  }
