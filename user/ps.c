#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"
#include "kernel/syscall.h"

void main(void)
{
  totpro();
  showprocs();
  
  exit(0);
}
