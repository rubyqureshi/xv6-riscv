#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int main(void)
{
  int output1 = totpro();
  
  int output2 = showprocs();
  exit(0);
}
