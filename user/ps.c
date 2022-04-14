#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

void main()
{
  totpro();
  
  showprocs();
  exit(0);
}