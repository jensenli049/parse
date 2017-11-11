#include "parse.h"

int main(){
  /*
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  */
  int i = 0;  
  char newline[] = "ls -a -l";

  printf("\nTesting %s:\n", newline);
  char ** args = parse_args( newline );
  printf("Parsed args\n");
  
  while (args[i])
    printf("args[%d] = %s\n", i++, args[i]);

  printf("\nRunning the command\n");
  execvp(args[0], args);
}

char ** parse_args( char * line ){
  char ** retval = malloc(32*sizeof(char*));
  int i = 0;

  if(!strchr(line,' ')){
    printf("There is no space!\n");
    retval[0] = line;
    return retval;
  }
  while( line ){
    //printf("%s\n", line);
    retval[i++] = strsep( &line," " );
    //printf("%s\n", retval[i-1]);
  }
  return retval;
}
