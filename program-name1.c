#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) 
{
    #if 1
      char *v = "v" ;
      char *m = "m" ;
      char *k = "k" ;
      char *argv1 = argv[1] ;
    #endif 
     
     if(argv1 == 0){
      printf("venu\nmahesh\nkiran\n");
     }
     else{
     if(strcmp(v, argv1) == 0)
      printf("venu\n");

     else if(strcmp(m, argv1) == 0 )
           printf("mahesh\n");

     else if(strcmp(k, argv1) == 0)
           printf("kiran\n");
     
     else
        printf("invalid : you have passed an ivalid argument\n");
     }

return 0;
}
