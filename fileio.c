//Team JT -- Jacke Li & Tiffany Zhong
//System pd05
//10-23-18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {

  int in = open("infile.txt", O_RDONLY);
  char * t1 = (char *) malloc(500);

  int reading = read(in, t1, 300);
  printf("reading returned: %d \n", reading);
  printf("text1: %s\n", t1);
  
  int out = open("out.txt", O_WRONLY);
  char * t2 = (char *) malloc(500);
  strcat(t2, "Fresh Prince");
  printf("t2: %s\n", t2);

  int writer = write(out, t2, 12);
  printf("write: %d\n", writer);
  printf("Wrote to outfile: %s\n", t2);

  int c1 = close(in);
  int c2 = close(out);

  return 0;
  
}
