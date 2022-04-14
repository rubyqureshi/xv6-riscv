#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int main(void)
{
  printf(totpro());
  
  printf(showprocs());
  exit(0);
}
