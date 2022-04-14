#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"
#include "kernel/syscall.h"

void main(void)
{
  int output1 = totpro();
  printf("%d", output1);
  int output2 = showprocs();
  printf("%d", output2 );
  
  exit(0);
}
