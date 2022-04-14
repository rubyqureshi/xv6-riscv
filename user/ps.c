#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

void main(void)
{
  int output1 = totpro();
  int output2 = showprocs();
  printf("%d %d", output1, output2 );
  
  exit(0);
}
