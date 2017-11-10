#include "parse.h"

int main(){
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);

  //char ** args = parse_args( "ls -a -l" );
  execvp(args[0], parse_args( "ls -a -l" ));
}





char ** parse_args( char * line ){
  char* retval[5];
  int i = 0;
  while( line ){
    retval[i] = strsep( &line, " " );
    printf("%s", line);
    i++;
  }
  return retval;
}
